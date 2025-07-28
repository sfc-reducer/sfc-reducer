(declare-fun v () (_ BitVec 1))
(declare-fun v5 () (_ BitVec 7))
(assert (let (($e327 (ite (= v (_ bv0 1)) (bvand (_ bv1 10) (concat v5 (_ bv0 3))) (bvand ((_ zero_extend 3) v5) (bvand (_ bv1 10) (concat v5 (_ bv0 3)))))))))
