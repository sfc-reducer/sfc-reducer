(declare-fun i () Int)
(assert (sep true (pto 0 (- i))))
(check-sat)
