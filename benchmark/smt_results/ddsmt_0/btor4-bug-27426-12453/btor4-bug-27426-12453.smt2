(declare-fun v1 () (_ BitVec 10))
(declare-fun v6 () (_ BitVec 16))
(declare-fun v () (_ BitVec 1))
(assert (let (($e283 (ite (= v (_ bv0 1)) (bvand (_ bv1 16) (concat v1 (_ bv0 6))) (bvand v6 (bvand (_ bv1 16) (concat v1 (_ bv0 6)))))))))
