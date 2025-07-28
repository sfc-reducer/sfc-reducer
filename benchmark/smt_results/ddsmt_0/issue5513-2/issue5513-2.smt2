(declare-fun b () (Bag Int))
(declare-fun a () (Bag Int))
(assert (not (bag.is_included a b)))
(check-sat)
