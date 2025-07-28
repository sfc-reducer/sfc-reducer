(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 3)))
(assert (not (= (_ bv0 1) (bvand (bvcomp (_ bv0 1) (bvcomp (_ bv0 1) (ite (bvult (select a (_ bv0 1)) (select (store a (_ bv0 1) (_ bv0 3)) (bvnot v))) (_ bv1 1) (_ bv0 1)))) (bvnot (bvcomp (_ bv0 15) (ite (= (_ bv1 1) (ite (bvult (_ bv0 15) (bvand (_ bv1 15) ((_ zero_extend 14) v))) (_ bv1 1) (_ bv0 1))) (_ bv1 15) (_ bv0 15))))))))
