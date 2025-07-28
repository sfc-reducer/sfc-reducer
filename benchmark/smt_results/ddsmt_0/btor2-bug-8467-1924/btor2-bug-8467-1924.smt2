(declare-fun b () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 4)))
(assert (not (= (_ bv0 1) (bvnot (bvcomp (_ bv0 4) (select (store (store a (_ bv1 1) (_ bv0 4)) b (_ bv1 4)) (_ bv1 1)))))))
