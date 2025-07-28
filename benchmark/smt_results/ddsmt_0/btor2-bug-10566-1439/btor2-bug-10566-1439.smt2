(declare-fun b () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 13)))
(assert (not (= (ite (bvult (_ bv0 12) ((_ extract 11 0) (select (store a b (_ bv0 13)) (_ bv1 1)))) (_ bv1 1) (_ bv0 1)) (ite (bvult (_ bv0 12) ((_ extract 11 0) (select (store a (_ bv0 1) (_ bv0 13)) (extract (select a (_ bv1 1)))))) (_ bv1 1) (_ bv0 1)))))
