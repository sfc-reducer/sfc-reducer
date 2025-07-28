(declare-fun v () (_ BitVec 14))
(declare-fun v3 () (_ BitVec 15))
(declare-fun a () (Array (_ BitVec 15) (_ BitVec 11)))
(assert (let (($e834 (ite (= (_ bv0 1) (ite (= (extract v3) (_ bv0 1)) (_ bv1 1) (_ bv0 1))) (bvand v ((_ zero_extend 3) (select a (_ bv0 15)))) (bvand (_ bv1 14) (bvand v ((_ zero_extend 3) (select a (_ bv0 15))))))))))
