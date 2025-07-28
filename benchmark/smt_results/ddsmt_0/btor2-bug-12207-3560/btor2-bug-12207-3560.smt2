(declare-fun b () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 3)))
(assert (= (_ bv0 1) (bvnot (bvcomp (_ bv0 1) (bvcomp (_ bv0 1) (bvnot (bvcomp (_ bv0 3) (select (store (store a (_ bv1 1) (_ bv0 3)) b (_ bv1 3)) (_ bv1 1)))))))))
