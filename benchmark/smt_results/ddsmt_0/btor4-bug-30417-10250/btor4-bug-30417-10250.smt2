(declare-fun v () (_ BitVec 16))
(declare-fun v3 () (_ BitVec 7))
(declare-fun a () (_ BitVec 1))
(assert (let (($e353 (ite (= a (_ bv0 1)) ((_ zero_extend 8) (bvand (_ bv1 8) ((_ zero_extend 1) v3))) (bvand v ((_ zero_extend 8) (bvand (_ bv1 8) ((_ zero_extend 1) v3)))))))))
