(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 12)))
(assert (= (_ bv0 1) (ite (bvult (_ bv0 11) ((_ extract 10 0) (select (store (store a (_ bv1 1) (_ bv1 12)) v (_ bv0 12)) (_ bv1 1)))) (_ bv1 1) (_ bv0 1))))
