(declare-fun v7 () Bool)
(declare-fun i2 () Int)
(declare-heap (Int Bool))
(assert                                                                (sep (pto i2 (+ 54 i2 ))      v7        )                                                                                                                                                                                                              )
(check-sat)
