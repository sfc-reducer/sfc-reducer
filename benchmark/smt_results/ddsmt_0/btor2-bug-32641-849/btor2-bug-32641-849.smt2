(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 2)))
(assert (= (_ bv0 1) (bvnot (bvand (bvcomp (_ bv0 1) (bvnot (bvcomp (bvnot (_ bv0 9)) (concat (bvnot (_ bv0 7)) (select (store a (_ bv0 1) (_ bv0 2)) (bvnot v)))))) (bvcomp (_ bv0 1) (ite (bvult ((_ zero_extend 5) (bvnot (bvand (_ bv1 6) (ite false (_ bv0 6) ((_ zero_extend 4) (select (store a (_ bv0 1) (_ bv1 2)) v)))))) (_ bv1 11)) (_ bv1 1) (_ bv0 1)))))))
