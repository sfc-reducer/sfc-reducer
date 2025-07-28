(declare-fun v () (_ BitVec 1))
(declare-fun b () (_ BitVec 4))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 9)))
(assert (= (_ bv0 1) (ite (bvult ((_ zero_extend 6) (select (store a (_ bv0 1) (_ bv0 9)) (bvnot (extract (bvand (bvnot ((_ zero_extend 1) (concat b (_ bv0 7)))) (bvnot (ite (= v (_ bv1 1)) (_ bv1 12) (_ bv0 12)))))))) (_ bv1 15)) (_ bv1 1) (_ bv0 1))))
