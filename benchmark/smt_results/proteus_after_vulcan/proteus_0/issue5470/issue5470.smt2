(declare-const b  Int)
(assert (exists ((c Int)) (<= 0 c    (div b b) )))
(check-sat)
