(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 10) (_ BitVec 13)))
(declare-fun a1 () (Array (_ BitVec 1) (_ BitVec 5)))
(assert (= (_ bv0 1) (ite (bvult (_ bv1 12) ((_ zero_extend 11) (bvcomp (_ bv0 12) ((_ extract 11 0) (select a ((_ zero_extend 5) (select (store (store a1 (_ bv1 1) (_ bv1 5)) v (_ bv0 5)) (_ bv1 1)))))))) (_ bv1 1) (_ bv0 1))))
