(assert (forall ((a Int) (b Int)) (or (> a (/ 0 b)) (exists ((c Int)) (< a c 0)))))
(check-sat)
