(declare-fun v () (_ BitVec 13))
(declare-fun v7 () (_ BitVec 13))
(declare-fun v9 () (_ BitVec 8))
(assert (let (($e433 (ite (= (_ bv0 1) (ite (= (extract v7) (_ bv0 1)) (_ bv1 1) (_ bv0 1))) (bvand v (concat v9 (_ bv0 5))) (bvand (_ bv1 13) (bvand v (concat v9 (_ bv0 5)))))))))
