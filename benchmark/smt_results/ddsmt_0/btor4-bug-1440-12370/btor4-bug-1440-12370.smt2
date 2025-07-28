(declare-fun v () (_ BitVec 1))
(declare-fun a7 () (Array (_ BitVec 14) (_ BitVec 3)))
(declare-fun a () (Array (_ BitVec 5) (_ BitVec 11)))
(assert (let (($e1176 (ite (= v (_ bv0 1)) (bvand (_ bv1 11) (select a (_ bv0 5))) (bvand ((_ zero_extend 8) (select a7 (_ bv0 14))) (bvand (_ bv1 11) (select a (_ bv0 5)))))))))
