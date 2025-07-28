(declare-fun v () (_ BitVec 12))
(declare-fun v11 () (_ BitVec 1))
(declare-fun v1 () (_ BitVec 2))
(assert (= (_ bv0 1) (ite (bvult ((bvcomp (_ bv0 15) ((_ zero_extend 4) (ite (= v11 (_ bv0 1)) ((_ zero_extend 10) (bvcomp (_ bv1 1) (bvand (extract v) (ite (bvult (_ bv0 11) ((_ zero_extend 8) (concat v1 (_ bv0 1)))) (_ bv1 1) (_ bv0 1))))) (bvand (_ bv1 11) ((_ zero_extend 10) (bvcomp (_ bv1 1) (bvand (extract v) (ite (bvult (_ bv0 11) ((_ zero_extend 8) (concat v1 (_ bv0 1)))) (_ bv1 1) (_ bv0 1)))))))))) (_ bv1 1)) (_ bv1 1) (_ bv0 1))))
