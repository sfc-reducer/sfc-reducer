(declare-fun v () (_ BitVec 15))
(declare-fun v7 () (_ BitVec 5))
(declare-fun v1 () (_ BitVec 15))
(assert (let (($e1976 (ite (= (_ bv0 1) (ite (= (extract v7) (_ bv0 1)) (_ bv1 1) (_ bv0 1))) (bvand v1 (_ bv1 15)) (bvand v (bvand v1 (_ bv1 15))))))))
