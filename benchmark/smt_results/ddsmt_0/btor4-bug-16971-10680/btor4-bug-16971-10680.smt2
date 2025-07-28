(declare-fun v () (_ BitVec 10))
(declare-fun v7 () (_ BitVec 15))
(declare-fun v1 () (_ BitVec 12))
(assert (let (($e123 (ite (= (_ bv0 1) (ite (= (extract v1) (_ bv0 1)) (_ bv1 1) (_ bv0 1))) ((_ zero_extend 5) (bvand v (_ bv1 10))) (bvand v7 ((_ zero_extend 5) (bvand v (_ bv1 10)))))))))
