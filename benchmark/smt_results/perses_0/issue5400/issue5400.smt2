(declare-fun st6 () (Set Int))
(declare-fun st11 () (Set Int))
(assert (or (is_singleton (complement st6)) (>= 10 (card st11) 65    )))
(check-sat)
