(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 16)))
(assert (and (= (_ bv0 16) (select (store a (_ bv0 1) (_ bv1 16)) (extract (select a (_ bv1 1))))) (= (_ bv0 1) (ite (bvult (_ bv0 15) ((_ extract 14 0) (select (store a (_ bv0 1) (_ bv0 16)) v))) (_ bv1 1) (_ bv0 1)))))
