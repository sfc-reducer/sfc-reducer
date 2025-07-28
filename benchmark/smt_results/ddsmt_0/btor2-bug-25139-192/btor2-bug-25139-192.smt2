(declare-fun v () (_ BitVec 10))
(declare-fun a () (Array (_ BitVec 15) (_ BitVec 15)))
(declare-fun a1 () (Array (_ BitVec 1) (_ BitVec 10)))
(assert (= (_ bv0 15) (select (store a (_ bv0 15) ((_ zero_extend 5) (select (store (store a1 (_ bv1 1) (_ bv1 10)) (extract v) (_ bv0 10)) (_ bv1 1)))) (_ bv0 15))))
