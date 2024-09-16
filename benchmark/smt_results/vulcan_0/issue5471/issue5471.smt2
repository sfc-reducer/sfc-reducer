(declare-fun b () Real)
(assert (forall ((d Real)) (= (= d 0) (=       (/ b b)  0))))
(assert (=  (* b b) 0))
(check-sat)
