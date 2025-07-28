(declare-fun b () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 9) (_ BitVec 7)))
(declare-fun a1 () (Array (_ BitVec 1) (_ BitVec 2)))
(assert (= (_ bv0 1) (bvand (ite (bvult (_ bv1 16) ((_ zero_extend 14) (select a1 (_ bv1 1)))) (_ bv1 1) (_ bv0 1)) (bvand (ite (bvult (ite (= (_ bv0 1) (ite (bvult (_ bv0 16) ((_ zero_extend 14) (select (store a1 (extract (select a (_ bv0 9))) (_ bv0 2)) (_ bv0 1)))) (_ bv1 1) (_ bv0 1))) (_ bv1 11) (_ bv0 11)) (_ bv1 11)) (_ bv1 1) (_ bv0 1)) (bvand (_ bv1 1) (bvnot (extract ((select (store a1 (_ bv0 1) (_ bv0 2)) b)))))))))
