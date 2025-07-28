(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 6)))
(assert (not (= (ite (bvult ((_ bv0 6)) (select a (_ bv1 1))) (_ bv1 1) (_ bv0 1)) (bvnot (bvcomp (_ bv0 11) ((_ zero_extend 5) (select (store (store a (_ bv0 1) (_ bv0 6)) v (_ bv1 6)) (_ bv1 1))))))))
