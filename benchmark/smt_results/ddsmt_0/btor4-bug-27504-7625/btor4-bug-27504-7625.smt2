(declare-fun v6 () (_ BitVec 10))
(declare-fun v () (_ BitVec 1))
(declare-fun v2 () (_ BitVec 9))
(assert (let (($e1173 (ite (= v (_ bv0 1)) ((_ zero_extend 1) (bvand v2 (_ bv1 9))) (bvand v6 ((_ zero_extend 1) (bvand v2 (_ bv1 9)))))))))
