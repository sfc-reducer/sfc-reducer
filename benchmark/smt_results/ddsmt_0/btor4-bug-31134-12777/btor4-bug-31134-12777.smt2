(declare-fun v () (_ BitVec 2))
(declare-fun v4 () (_ BitVec 6))
(declare-fun v1 () (_ BitVec 1))
(assert (let (($e679 (ite (= v1 (_ bv0 1)) (bvand (_ bv1 7) (concat v4 (_ bv0 1))) (bvand (concat v (_ bv0 5)) (bvand (_ bv1 7) (concat v4 (_ bv0 1)))))))))
