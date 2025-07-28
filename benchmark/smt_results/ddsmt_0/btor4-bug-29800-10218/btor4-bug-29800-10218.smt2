(declare-fun v () (_ BitVec 6))
(declare-fun v1 () (_ BitVec 6))
(declare-fun v2 () (_ BitVec 16))
(assert (let (($e1058 (ite (= v2 (_ bv0 16)) (bvand v1 (_ bv1 6)) (bvand v (bvand v1 (_ bv1 6))))))))
