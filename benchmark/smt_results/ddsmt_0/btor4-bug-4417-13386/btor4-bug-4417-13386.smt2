(declare-fun v () (_ BitVec 10))
(declare-fun v1 () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 10) (_ BitVec 14)))
(assert (let (($e946 (ite (= v1 (_ bv0 1)) ((_ zero_extend 4) (bvand v (_ bv1 10))) (bvand (select a (_ bv0 10)) ((_ zero_extend 4) (bvand v (_ bv1 10)))))))))
