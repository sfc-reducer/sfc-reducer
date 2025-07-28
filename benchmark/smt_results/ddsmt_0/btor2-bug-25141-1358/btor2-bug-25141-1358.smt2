(declare-fun b () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 5)))
(assert (not (= (_ bv0 1) (bvnot (bvand (_ bv1 1) (bvnot (extract (select (store (store a (_ bv1 1) (_ bv0 5)) b (_ bv1 5)) (_ bv1 1)))))))))
