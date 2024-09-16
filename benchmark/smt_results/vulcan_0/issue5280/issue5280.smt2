(declare-datatype ty0 (      (false              (v2(Set ty0)))))
(declare-fun v1 () ty0)
(assert (= (v2 v1) (singleton v1)))
(check-sat)
