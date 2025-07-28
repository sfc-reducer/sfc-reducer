(declare-fun v () (_ BitVec 10))
(declare-fun v1 () (_ BitVec 1))
(declare-fun v17 () (_ BitVec 10))
(assert (let (($e707 (ite (= v1 (_ bv0 1)) (bvand v (_ bv1 10)) (bvand v17 (bvand v (_ bv1 10))))))))
