(set-logic QF_LIA)
(declare-fun i () Int)
(assert (= 1 ((_ iand 1) 1 i)))
(check-sat)
