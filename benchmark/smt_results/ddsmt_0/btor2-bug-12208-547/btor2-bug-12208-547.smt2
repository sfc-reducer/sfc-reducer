(declare-fun a () (Array (_ BitVec 1) (_ BitVec 5)))
(declare-fun a8 () (_ BitVec 12))
(assert (= (_ bv0 1) (bvnot (bvand (_ bv1 1) (extract ((select (store a (_ bv1 1) (_ bv0 5)) (bvnot (extract a8)))))))))
