(set-option :produce-unsat-cores true)
(set-option :solve-bv-as-int sum)
(check-sat-assuming (       (= ((_ repeat 5)         (_ bv77 7)            ) ((_ repeat 5)         (_ bv77 7)            ))                                                                                                                                                                                                                                                                               ))
