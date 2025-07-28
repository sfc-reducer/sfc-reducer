(declare-fun v5 () (_ BitVec 16))
(declare-fun v () (_ BitVec 9))
(declare-fun v1 () (_ BitVec 1))
(assert (let (($e195 (ite (= v1 (_ bv0 1)) (bvand v5 (concat v (_ bv0 7))) (bvand (_ bv1 16) (bvand v5 (concat v (_ bv0 7)))))))))
