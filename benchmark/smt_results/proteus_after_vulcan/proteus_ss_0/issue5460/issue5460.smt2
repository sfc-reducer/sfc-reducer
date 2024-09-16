(declare-const bag6  (Bag Bool))
(assert     (bag.is_included bag6 bag6) )
(check-sat)
