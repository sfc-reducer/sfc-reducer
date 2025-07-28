(declare-fun b () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 13)))
(assert (not (= (_ bv0 9) ((_ extract 11 3) (select (store (store a (_ bv1 1) (_ bv0 13)) b (select a (_ bv0 1))) (_ bv1 1))))))
