(set-option :check-models true)
(set-logic QF_UFLIA)
(declare-fun a () Int)
(declare-fun b (Int Int) Int)
(
 declare-fun f () Int)
(declare-fun g () Int)
(
 declare-fun j () Int)
(assert (=   (b j g) a))
(
 assert (= (b g f) a))
(assert (= j (* g 5)))
(check-sat)
