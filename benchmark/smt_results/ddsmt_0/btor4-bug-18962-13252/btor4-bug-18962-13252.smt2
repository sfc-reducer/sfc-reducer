(declare-fun v () (_ BitVec 16))
(declare-fun v3 () (_ BitVec 16))
(declare-fun v6 () (_ BitVec 1))
(assert (let (($e1984 (ite (= v6 (_ bv0 1)) (bvand v (_ bv1 16)) (bvand v3 (bvand v (_ bv1 16))))))))
