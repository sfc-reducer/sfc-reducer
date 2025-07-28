(set-logic QF_NRA)
(declare-fun r () Real)
(assert (and (= 8 (/ 0.0 0.0)) (= (/ 0.0 0.0) (* r r))))
(check-sat)
