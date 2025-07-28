(declare-fun v () (_ BitVec 11))
(declare-fun v1 () (_ BitVec 9))
(assert (let (($e1340 (ite (= (_ bv0 1) (ite (bvult v (_ bv1 11)) (_ bv1 1) (_ bv0 1))) (bvand v1 ((_ zero_extend 8) (ite (bvult (_ bv1 11) (concat v1 (_ bv0 2))) (_ bv1 1) (_ bv0 1)))) (bvand (_ bv1 9) (bvand v1 ((_ zero_extend 8) (ite (bvult (_ bv1 11) (concat v1 (_ bv0 2))) (_ bv1 1) (_ bv0 1))))))))))
