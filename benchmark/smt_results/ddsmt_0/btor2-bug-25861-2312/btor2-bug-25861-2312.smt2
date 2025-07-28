(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 13)))
(assert (= (_ bv0 1) (ite (bvult (_ bv0 13) ((_ zero_extend 2) ((_ extract 12 2) (select (store a (_ bv0 1) (_ bv1 13)) (bvnot ((_ extract 8 8) (bvand (bvnot (ite (= v (_ bv1 1)) (_ bv0 14) (_ bv1 14))) (bvnot (ite (= v (_ bv1 1)) (_ bv1 14) (_ bv0 14)))))))))) (_ bv1 1) (_ bv0 1))))
