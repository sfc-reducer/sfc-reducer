#![feature(generators, generator_trait)]
use std::
    ops::*
 ;
fn my_scenario() -> impl Generator<String                                       > {
|_|(
                        yield,
                      yield)
}
fn main() {
    let mut String     = Box::pin(my_scenario());
    loop {
        let     line = String::new();
        match String    .as_mut().resume(line) {
            GeneratorState::Yielded(line  ) => {
            }
                            line        =>
                break
        }
               String::default();
    }
}
