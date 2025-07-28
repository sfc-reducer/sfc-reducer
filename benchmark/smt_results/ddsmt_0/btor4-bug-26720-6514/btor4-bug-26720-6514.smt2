(declare-fun v () (_ BitVec 15))
(declare-fun v1 () (_ BitVec 10))
(assert (let (($e414 (ite (= v (_ bv0 15)) (bvand v1 (_ bv1 10)) (bvand (bvand v1 (_ bv1 10)) ((_ zero_extend 9) (bvcomp v (_ bv0 15)))))))))
