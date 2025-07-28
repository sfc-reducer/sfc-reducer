(declare-fun v5 () (_ BitVec 3))
(declare-fun v () (_ BitVec 6))
(assert (let (($e526 (ite (= v (_ bv0 6)) ((_ zero_extend 13) (bvand v5 (_ bv1 3))) (bvand ((_ zero_extend 13) (bvand v5 (_ bv1 3))) (ite (= v (_ bv0 6)) (_ bv1 16) (_ bv0 16))))))))
