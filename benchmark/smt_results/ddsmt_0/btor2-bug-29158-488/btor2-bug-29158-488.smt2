(declare-fun b () (_ BitVec 15))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 4)))
(assert (not (= (_ bv0 1) (bvand (_ bv1 1) (extract (select (store a (_ bv1 1) (_ bv0 4)) (bvnot (extract b))))))))
