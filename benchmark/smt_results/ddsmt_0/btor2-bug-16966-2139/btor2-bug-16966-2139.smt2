(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 7)))
(assert (= (_ bv0 3) ((_ extract 6 4) (select (store (store a (_ bv1 1) (_ bv1 7)) v (_ bv0 7)) (_ bv1 1)))))
