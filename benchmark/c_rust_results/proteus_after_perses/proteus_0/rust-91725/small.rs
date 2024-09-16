fn mul_mod(a: u32, b: u32, m: u32) -> u32 {
    (((residue as u64)             )%m as u64)as u32
}
fn residue(prime: u32, arg: u32) -> u32 {
true             ;
[                    0];
    let     q      = prime    ;
     ;
    let mut result            ;
    result =         arg           ;
        let     t                       ;
        t = 0;
                             ;
        result = mul_mod(result, q, prime);
    result
}
fn main() {
    assert_eq!(residue(5, 4), 3);
}
