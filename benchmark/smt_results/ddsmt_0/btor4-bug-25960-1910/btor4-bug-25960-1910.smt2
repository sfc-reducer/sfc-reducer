(declare-fun v () (_ BitVec 9))
(declare-fun a4 () (Array (_ BitVec 9) (_ BitVec 8)))
(declare-fun a () (_ BitVec 1))
(assert (let (($e540 (ite (= a (_ bv0 1)) (bvand v (_ bv1 9)) (bvand (bvand v (_ bv1 9)) ((_ zero_extend 1) (select a4 (_ bv0 9)))))))))
