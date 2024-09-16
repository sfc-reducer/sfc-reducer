(declare-const bag3  (Bag Int))
(declare-const bag9  (Bag Int))
(assert (= false (bag.is_included bag9 bag3)))
(check-sat)
