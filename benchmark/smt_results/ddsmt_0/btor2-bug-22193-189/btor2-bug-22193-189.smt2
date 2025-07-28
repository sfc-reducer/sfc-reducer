(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 2)))
(assert (= (_ bv0 1) (ite (bvult (_ bv0 8) ((_ zero_extend 6) (((select (store (store a (_ bv1 1) (_ bv1 2)) (v) (_ bv0 2)) (_ bv1 1)))))) (_ bv1 1) (_ bv0 1))))
