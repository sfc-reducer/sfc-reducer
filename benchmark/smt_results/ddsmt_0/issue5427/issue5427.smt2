(declare-fun i () Int)
(declare-heap (Int Int))
(assert (= (pto 0 0) (sep true (pto 0 (+ 1 i)))))
(check-sat)
