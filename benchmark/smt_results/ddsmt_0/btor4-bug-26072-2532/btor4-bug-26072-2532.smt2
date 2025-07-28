(declare-fun v () (_ BitVec 1))
(assert (let (($e1314 (ite (= v (_ bv0 1)) (bvand (_ bv1 8) (concat v (_ bv0 7))) (bvand ((_ zero_extend 7) v) (bvand (_ bv1 8) (concat v (_ bv0 7)))))))))
