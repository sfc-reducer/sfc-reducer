(declare-datatype t ((C (v2 (Set t)))))
(declare-fun v () t)
(assert (= (v2 v) (singleton v)))
(check-sat)
