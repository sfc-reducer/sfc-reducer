(declare-fun b () Int)
(assert (exists ((c Int)) (and (< 0 c) (< c (div 0 b)))))
(check-sat)
