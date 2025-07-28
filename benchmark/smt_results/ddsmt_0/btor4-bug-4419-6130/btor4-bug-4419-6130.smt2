(declare-fun v () (_ BitVec 1))
(declare-fun v1 () (_ BitVec 4))
(declare-fun a () (Array (_ BitVec 5) (_ BitVec 3)))
(assert (let (($e1256 (ite (= v (_ bv0 1)) (bvand v1 (_ bv1 4)) (bvand (bvand v1 (_ bv1 4)) ((_ zero_extend 1) (select a (_ bv0 5)))))))))
