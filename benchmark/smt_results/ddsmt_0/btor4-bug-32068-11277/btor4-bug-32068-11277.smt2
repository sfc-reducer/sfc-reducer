(declare-fun v () (_ BitVec 16))
(declare-fun v2 () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 13) (_ BitVec 2)))
(assert (and (= (_ bv0 1) (ite (bvult (_ bv1 11) ((_ zero_extend 9) (select a ((_ extract 13 1) v)))) (_ bv1 1) (_ bv0 1))) (= (_ bv0 1) (ite (bvult (_ bv0 14) ((_ extract 13 0) (ite (= v2 (_ bv0 1)) ((_ zero_extend 14) (ite (bvult v (_ bv1 16)) (_ bv1 1) (_ bv0 1))) (bvand (_ bv1 15) ((_ zero_extend 14) (ite (bvult v (_ bv1 16)) (_ bv1 1) (_ bv0 1))))))) (_ bv1 1) (_ bv0 1)))))
