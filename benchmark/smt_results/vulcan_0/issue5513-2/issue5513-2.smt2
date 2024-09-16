(declare-fun bag3 () (Bag Int))
(declare-fun bag9 () (Bag Int))
(assert (= false (=               bag9 bag3)))
(check-sat)
