(declare-fun t () (Set Int))
(assert (is_singleton (complement (complement t))))
(assert (> (card t) 1))
(check-sat)
