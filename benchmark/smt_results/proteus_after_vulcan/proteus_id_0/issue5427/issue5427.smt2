(declare-fun i2 () Int)
(declare-heap (Int Bool))
(assert                                                                (sep (pto i2 (+ 54 i2 ))true            )                                                                                                                                                                                                              )
(check-sat)
