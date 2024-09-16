(set-option :check-models true)
(set-logic QF_UFLIA)
(declare-const a  Int)
(declare-fun b (Int Int) Int)
(declare-fun c (Int Int) Int)
(declare-const d  Int)
(declare-const e  Int)
(declare-const f  Int)
(declare-const g  Int)
(declare-const i  Int)
(declare-const j  Int)
(declare-const k  Int)
(assert (= d (b j d) a))
(assert (= e (c e i)))
(assert (= (b k f) a))
(assert (= d (+ g 4)))
(assert (= j (* g 5)))
(assert (= e (+ g 5)))
(assert (= k 0))
(check-sat)
