(declare-fun b () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 4)))
(assert (= (_ bv0 1) (bvand (_ bv1 1) (extract (select (store (store a (_ bv1 1) (_ bv1 4)) b (_ bv0 4)) (_ bv1 1))))))
