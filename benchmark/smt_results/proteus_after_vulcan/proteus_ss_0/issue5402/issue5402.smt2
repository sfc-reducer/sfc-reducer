(declare-const i1  Int)
(declare-const st4  (Set Int))
(declare-const st6  (Set Int))
(assert (is_singleton (complement (setminus (setminus     st6 st4) st6))))
(assert (> 0 (-   (abs (- (card st6) 16))                           i1)))
(check-sat)
