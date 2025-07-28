(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 16)))
(assert (= (_ bv0 1) (ite (bvult (_ bv1 16) (select (store (store a (_ bv1 1) (_ bv1 16)) v (_ bv0 16)) (_ bv1 1))) (_ bv1 1) (_ bv0 1))))
