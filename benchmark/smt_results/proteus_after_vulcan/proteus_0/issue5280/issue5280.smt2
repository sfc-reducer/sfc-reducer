(declare-datatype ty0 (      (not                (v2(Set ty0)))))
(declare-const v1  ty0)
(assert (= (v2 v1) (singleton v1)))
(check-sat)
