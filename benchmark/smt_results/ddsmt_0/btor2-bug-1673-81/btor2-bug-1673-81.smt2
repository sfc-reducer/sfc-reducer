(declare-fun a () (Array (_ BitVec 15) (_ BitVec 14)))
(declare-fun a8 () (Array (_ BitVec 1) (_ BitVec 16)))
(assert (= (_ bv0 1) (ite (bvult ((_ zero_extend 1) (select a (_ bv0 15))) ((_ extract 14 0) (select (store (store a8 (_ bv0 1) (_ bv0 16)) (extract (select a8 (_ bv1 1))) ((_ zero_extend 2) (select a (_ bv0 15)))) (_ bv1 1)))) (_ bv1 1) (_ bv0 1))))
