(declare-const b  Real)
(declare-const c  Real)
(assert (forall ((d Real)) (= (> d 0) (<=      (/ b c)  0))))
(assert (>  (* b b) 0))
(check-sat)
