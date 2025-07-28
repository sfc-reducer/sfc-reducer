(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 15)))
(assert (= (_ bv0 15) (select (store (store a (_ bv1 1) (_ bv1 15)) (v) (_ bv0 15)) (_ bv1 1))))
