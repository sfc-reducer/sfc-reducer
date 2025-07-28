(declare-fun b () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 12)))
(assert (= (_ bv0 1) (bvand (bvcomp (_ bv1 1) (extract (select (store (store a (_ bv0 1) (_ bv1 12)) b (_ bv0 12)) (_ bv1 1)))) (ite (bvult (_ bv0 11) ((_ extract 10 0) (select (store a (_ bv0 1) (select a (_ bv1 1))) (_ bv0 1)))) (_ bv1 1) (_ bv0 1)))))
