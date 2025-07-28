(declare-fun b () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 8) (_ BitVec 11)))
(declare-fun a4 () (Array (_ BitVec 1) (_ BitVec 5)))
(assert (= (_ bv0 1) (bvand (ite (bvult (select a (_ bv0 8)) ((_ zero_extend 6) (select (store (store a4 (_ bv0 1) (_ bv0 5)) b (_ bv1 5)) (_ bv1 1)))) (_ bv1 1) (_ bv0 1)) (ite (bvult (ite (= (b) (_ bv0 1)) ((_ zero_extend 10) (select a4 (_ bv1 1))) (concat (_ bv1 10) (select a4 (_ bv1 1)))) (bvnot (_ bv0 15))) (_ bv1 1) (_ bv0 1)))))
