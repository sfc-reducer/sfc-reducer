(declare-fun v () (_ BitVec 2))
(declare-fun v6 () (_ BitVec 12))
(declare-fun v9 () (_ BitVec 12))
(assert (let (($e1498 (ite (= (_ bv0 1) (ite (= (extract v) (_ bv0 1)) (_ bv1 1) (_ bv0 1))) (bvand v9 (_ bv1 12)) (bvand v6 (bvand v9 (_ bv1 12))))))))
