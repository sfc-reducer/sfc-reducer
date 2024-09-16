fn main() {
    let ns = (1..100 + 1).map(|x| x * 100_000).collect::<Vec<_>>();

    // find the primes up to this upper bound
    let sieve = primal::Sieve::new(1_000_000_000);

    // now we can efficiently sum them up
    let sum = ns.iter()
                .map(|n| sieve.nth_prime(*n))
                .fold(0u64, |a, b| a + b as u64);
    println!("the sum is {}", sum);
}
