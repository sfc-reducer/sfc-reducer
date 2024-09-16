(set-logic QF_NRA)
(declare-const r1  Real)
(assert                                                                         (= (/ 0.4 r1)           r1                ) )
(check-sat)
