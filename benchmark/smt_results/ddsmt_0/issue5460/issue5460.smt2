(declare-fun b () (Bag Int))
(assert (or (bag.is_included b b)))
(check-sat)
