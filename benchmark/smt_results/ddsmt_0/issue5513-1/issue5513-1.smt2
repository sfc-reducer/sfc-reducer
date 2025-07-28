(declare-fun b () (Bag Int))
(assert (= 0 (bag.card b)))
(check-sat)
