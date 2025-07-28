(declare-fun b () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 3)))
(assert (= (_ bv0 1) (ite (bvult (_ bv1 16) (ite (= (_ bv0 1) (ite (bvult (_ bv0 14) ((_ zero_extend 11) (select (store (store a (_ bv1 1) (_ bv1 3)) (b) (select a (_ bv0 1))) (_ bv1 1)))) (_ bv1 1) (_ bv0 1))) (_ bv1 16) (_ bv0 16))) (_ bv1 1) (_ bv0 1))))
