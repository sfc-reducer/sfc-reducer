(declare-const a  Real)
(declare-const b  Real)
(declare-const c  Real)
(assert (forall ((d Real)) (= (> d 0) (<=      (/ a c)  0))))
(assert (<= (* b b) 0))
(check-sat)
