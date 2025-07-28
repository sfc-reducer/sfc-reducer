(set-logic QF_NRA)
(declare-fun r () Real)
(assert (or (= 0.0 (/ 1.0 r)) (= (+ 1.0 1.0) (/ r (/ 1.0 0.0)))))
(check-sat)
