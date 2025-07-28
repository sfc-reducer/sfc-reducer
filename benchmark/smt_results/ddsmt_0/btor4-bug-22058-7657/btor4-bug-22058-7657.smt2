(declare-fun v () (_ BitVec 3))
(declare-fun v3 () (_ BitVec 1))
(declare-fun v1 () (_ BitVec 11))
(assert (let (($e5316 (ite (= v3 (_ bv0 1)) (bvand (_ bv1 11) (concat v (_ bv0 8))) (bvand v1 (bvand (_ bv1 11) (concat v (_ bv0 8)))))))))
