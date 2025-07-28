(declare-fun v () (_ BitVec 1))
(declare-fun v6 () (_ BitVec 7))
(declare-fun v7 () (_ BitVec 10))
(assert (let (($e690 (ite (= v (_ bv0 1)) ((_ zero_extend 3) (bvand v6 (_ bv1 7))) (bvand v7 ((_ zero_extend 3) (bvand v6 (_ bv1 7)))))))))
