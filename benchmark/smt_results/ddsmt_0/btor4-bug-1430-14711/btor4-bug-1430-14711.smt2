(declare-fun v () (_ BitVec 12))
(declare-fun v2 () (_ BitVec 16))
(declare-fun a () (_ BitVec 4))
(assert (let (($e461 (ite (= (_ bv0 1) (ite (= (extract a) (_ bv0 1)) (_ bv1 1) (_ bv0 1))) (bvand v2 (_ bv1 16)) (bvand (concat v (_ bv0 4)) (bvand v2 (_ bv1 16))))))))
