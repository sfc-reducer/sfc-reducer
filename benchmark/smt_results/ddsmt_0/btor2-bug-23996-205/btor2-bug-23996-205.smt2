(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 12)))
(assert (= (_ bv0 1) (bvnot (ite (bvult (_ bv0 2) ((_ extract 9 8) (select (store (store a (_ bv1 1) (_ bv0 12)) v (_ bv1 12)) (_ bv1 1)))) (_ bv1 1) (_ bv0 1)))))
