(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 12)))
(assert (not (= (_ bv0 1) (bvand (ite (bvult ((_ zero_extend 10) (bvcomp (select a (_ bv0 1)) (select (store a (_ bv0 1) (_ bv0 12)) v))) (_ bv1 11)) (_ bv1 1) (_ bv0 1)) (ite (bvult (select a (_ bv1 1)) (select (store a v (_ bv0 12)) (_ bv0 1))) (_ bv1 1) (_ bv0 1))))))
