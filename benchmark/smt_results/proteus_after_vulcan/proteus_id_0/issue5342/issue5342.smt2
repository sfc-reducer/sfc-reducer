(declare-fun st4 () (Set Int))
(assert (is_singleton (complement (complement st4))))
(assert (>          (card st4) 87))
(check-sat)
