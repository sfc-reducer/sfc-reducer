(set-logic QF_NRA)
(declare-const r1  Real)
(assert (or                                                                              (=(/ 0.4r1)r1                    )))
(check-sat)
