(declare-fun v () (_ BitVec 9))
(declare-fun a () (_ BitVec 1))
(declare-fun a6 () (Array (_ BitVec 10) (_ BitVec 9)))
(assert (let (($e978 (ite (= a (_ bv0 1)) (bvand (_ bv1 9) (select a6 (_ bv1 10))) (bvand v (bvand (_ bv1 9) (select a6 (_ bv1 10)))))))))
