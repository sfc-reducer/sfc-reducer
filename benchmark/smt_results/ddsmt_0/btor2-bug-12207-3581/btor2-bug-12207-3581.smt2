(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 10)))
(assert (= (_ bv0 1) (bvand (_ bv1 1) (bvand (extract (select a (_ bv1 1))) (ite (bvult (_ bv0 10) (select (store (store a (_ bv0 1) (_ bv1 10)) v (_ bv0 10)) (_ bv1 1))) (_ bv1 1) (_ bv0 1))))))
