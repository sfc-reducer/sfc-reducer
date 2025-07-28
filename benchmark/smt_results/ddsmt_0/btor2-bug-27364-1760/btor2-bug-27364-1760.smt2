(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 14)))
(assert (= (_ bv0 1) (bvand (ite (bvult (_ bv0 14) (bvand (_ bv1 14) (select (store a (_ bv1 1) (_ bv0 14)) v))) (_ bv1 1) (_ bv0 1)) (ite (bvult (_ bv0 11) ((_ extract 10 0) ((select (store (store a (_ bv1 1) (_ bv0 14)) (extract (ite (= v (_ bv0 1)) (_ bv0 9) (_ bv1 9))) (_ bv0 14)) (_ bv1 1))))) (_ bv1 1) (_ bv0 1)))))
