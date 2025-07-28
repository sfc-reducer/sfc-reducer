(declare-fun v () (_ BitVec 1))
(declare-fun b () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 12)))
(assert (= (_ bv0 1) (bvnot (bvand ((_ extract 10 10) (select a (bvnot b))) (bvand (_ bv1 1) (extract (select (store a (_ bv0 1) (_ bv0 12)) (bvnot v))))))))
