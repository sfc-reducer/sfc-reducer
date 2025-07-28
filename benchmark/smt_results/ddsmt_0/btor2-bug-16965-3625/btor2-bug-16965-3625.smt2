(declare-fun b () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 12)))
(assert (= (_ bv0 1) (ite (bvult (_ bv1 13) ((_ zero_extend 12) (ite (bvult (_ bv1 14) ((_ zero_extend 2) (select (store (store a (_ bv1 1) (_ bv1 12)) b (_ bv0 12)) (_ bv1 1)))) (_ bv1 1) (_ bv0 1)))) (_ bv1 1) (_ bv0 1))))
