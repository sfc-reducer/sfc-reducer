(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 3)))
(assert (= (_ bv0 1) (ite (bvult (_ bv1 2) ((_ extract 1 0) (select (store (store a (_ bv1 1) (_ bv1 3)) v (_ bv0 3)) (_ bv1 1)))) (_ bv1 1) (_ bv0 1))))
