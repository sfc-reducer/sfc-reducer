(declare-fun st6 () (Set Int))
(assert (or (is_singleton (complement st6)) (>= 10 (card st6 ) 65    )))
(check-sat)
