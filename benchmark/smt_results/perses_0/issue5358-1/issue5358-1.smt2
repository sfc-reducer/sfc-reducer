(set-logic QF_NRA)
(declare-fun r1 () Real)
(declare-fun r2 () Real)
(assert (= 33.0 (* r1    r2   )                               ))
(check-sat)
(assert (<= 0.0       r1))
(check-sat)
