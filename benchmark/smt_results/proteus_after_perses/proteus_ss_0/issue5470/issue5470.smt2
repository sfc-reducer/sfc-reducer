(declare-const a  Int)
(declare-const b  Int)
(assert (exists ((c Int)) (<= 0 c    (div a b) )))
(check-sat)
