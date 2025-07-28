(declare-fun v () (_ BitVec 12))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 4)))
(assert (= (_ bv0 4) (select (store (store a (_ bv1 1) (_ bv1 4)) (extract v) (_ bv0 4)) (_ bv1 1))))
