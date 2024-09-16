(set-option:produce-unsat-assumptions true)
(set-option :solve-bv-as-int sum)
(check-sat-assuming (       (distinct                    #b1001110  (bvlshr #b1001110 #b1001110)                                        )                                                                                                                                                                                                                                                               ))
