(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 2)))
(assert (not (= (_ bv0 1) (bvand (bvnot (bvcomp (_ bv0 2) (select a (_ bv1 1)))) (bvand (bvnot (bvcomp (_ bv0 1) (bvcomp (_ bv0 1) (bvcomp (_ bv0 12) (ite (= (_ bv0 4) ((_ zero_extend 2) (select (store a (_ bv0 1) (_ bv0 2)) (bvnot v)))) (_ bv1 12) (_ bv0 12)))))) (bvnot (ite (bvult (_ bv1 11) ((_ zero_extend 10) (extract (select (store a (_ bv1 1) (_ bv0 2)) v)))) (_ bv1 1) (_ bv0 1))))))))
