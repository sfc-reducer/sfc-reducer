(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 12)))
(assert (not (= (_ bv0 1) (bvnot (bvcomp (_ bv0 1) (ite (bvult (bvlshr (_ bv0 16) (_ bv0 16)) ((_ zero_extend 4) (select (store (store a (_ bv1 1) (_ bv0 12)) v (_ bv1 12)) (_ bv1 1)))) (_ bv1 1) (_ bv0 1)))))))
