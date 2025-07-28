(declare-fun v () (_ BitVec 16))
(declare-fun v7 () (_ BitVec 2))
(declare-fun v1 () (_ BitVec 16))
(assert (let (($e996 (ite (= (_ bv0 1) (ite (= (extract v7) (_ bv0 1)) (_ bv1 1) (_ bv0 1))) (bvand v (_ bv1 16)) (bvand v1 (bvand v (_ bv1 16))))))))
