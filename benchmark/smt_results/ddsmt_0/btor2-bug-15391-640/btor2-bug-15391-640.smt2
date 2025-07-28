(declare-fun b () (_ BitVec 1))
(declare-fun a3 () (Array (_ BitVec 1) (_ BitVec 13)))
(declare-fun a () (Array (_ BitVec 11) (_ BitVec 10)))
(assert (= (_ bv0 1) (ite (bvult (_ bv0 12) ((_ zero_extend 11) (bvcomp (_ bv0 1) (extract (ite (= (_ bv0 1) (ite (bvult ((_ zero_extend 3) (select a (_ bv0 11))) (select (store (store a3 (_ bv1 1) (_ bv0 13)) b (_ bv1 13)) (_ bv1 1))) (_ bv1 1) (_ bv0 1))) (_ bv0 9) (_ bv1 9)))))) (_ bv1 1) (_ bv0 1))))
