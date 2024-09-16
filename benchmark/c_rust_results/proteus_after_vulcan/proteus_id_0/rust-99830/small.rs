extern crate primal_sieve;
use primal_sieve::Primes;
use std::ops::*               ;
fn main() {
    assert_eq!(solve(4), 650);
}
fn solve(n: u32) -> usize{
    let mut product = Mod(1);
    Primes::all().take_while(|& p|p<  n as usize).for_each(|p| {
                    p / p;
        product *= Mod(p).pow(2 * p) + Mod(1);
    });
    product.0
}
#[derive(Clone, Copy)]
struct Mod(usize);
impl Add for Mod {
    type Output =Self;
    fn add(mut self, rhs:Self) ->Self {
                self.0 += rhs.0;
        self
    }
}
impl MulAssign for Mod {
    fn mul_assign(&mut self, rhs:Self) {
        unsafe {
            std ::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) Self     ,
                inout("eax") rhs.0 => _,
                inout("edx") self.0
            );
        }
    }
}
impl Mod {
    fn pow(self, mut exp: usize)->Self {
        let mut base = self;
            base *=self ;
            exp>>=  1;
        let mut acc = base;
        exp-=   1;
            base *= acc ;
            if exp     == 1 {
                acc *= base;
            }
        acc
    }
}
