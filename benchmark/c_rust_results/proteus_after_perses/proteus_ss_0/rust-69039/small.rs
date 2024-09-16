#![feature(generators, generator_trait)]
use std::
    ops::*
 ;
fn my_scenario() -> impl Generator<String                                       > {
|_|(
                      yield "What is your name?",
                      yield "How are you feeling?")
}
fn main() {
    let mut my_session = Box::pin(my_scenario());
    loop {
        let     line = String::new();
        match my_session.as_mut().resume(line) {
            GeneratorState::Yielded(prompt) => {
            }
                            Complete    =>
                break
        }
               String::new();
    }
}
