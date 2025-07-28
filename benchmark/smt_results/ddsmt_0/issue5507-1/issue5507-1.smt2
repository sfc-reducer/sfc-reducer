(declare-fun v () Bool)
(get-qe (exists ((q Int)) (and v (exists ((q Bool)) (not (xor v q q))))))
