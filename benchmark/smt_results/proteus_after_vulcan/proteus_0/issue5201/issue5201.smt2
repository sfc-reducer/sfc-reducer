(set-option :check-models true)
(set-logic QF_UFLIA)
(declare-const a  Int)
(declare-fun b (Int Int) Int)
(
declare-const f   Int)
(declare-const g  Int)
(
declare-const j   Int)
(assert (=   (b j g) a))
(
 assert (= (b g f) a))
(assert (= j (* g 5)))
(check-sat)
