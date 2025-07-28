(declare-fun s () (Set Int))
(assert (or (is_singleton (complement s)) (and (> 1 (card s)) (= 1 (card s)))))
(check-sat)
