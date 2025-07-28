(declare-fun b () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 3)))
(assert (not (= (_ bv0 1) (bvand (bvnot (bvcomp (_ bv0 3) (select (store a (_ bv0 1) (_ bv0 3)) b))) (bvcomp (_ bv0 3) (select (store a (extract (select a (_ bv1 1))) (_ bv0 3)) (_ bv0 1)))))))
