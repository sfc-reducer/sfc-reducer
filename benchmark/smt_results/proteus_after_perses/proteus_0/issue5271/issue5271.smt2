(declare-const i6 Int)
(declare-const st3  (Set Int))
(assert (> (card st3)                 46      ))
(assert (and                                                              (member (mod i6 46) st3)                                                           (member i6  st3 )                                                                                                                                                                            ))
(check-sat)
