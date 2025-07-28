extern crate primal_sieve;
use primal_sieve::Primes;
use std::ops::MulAssign;
fn main(){assert_eq !(a(4), 0)} fn a(b : u32)->u32 {
  let mut c = e(1);
  Primes::all().take_while(| &d | d < b as usize).for_each(| d | {
    let mut f = d;
    while
      let Some(g) = f.checked_mul(d){f = g} c *= e(1)
  });
  c .0
}
struct e(u32);
                                 impl MulAssign for e {
                                   fn mul_assign(&mut self, h : e) {
                                     unsafe {
                                       core::arch::asm !("div {}", in(reg)Self,
                                                         inout("eax") self .0)
                                     }
                                   }
                                 }
