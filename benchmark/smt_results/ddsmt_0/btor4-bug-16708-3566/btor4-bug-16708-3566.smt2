(declare-fun v3 () (_ BitVec 1))
(declare-fun v4 () (_ BitVec 5))
(declare-fun v () (_ BitVec 11))
(assert (let (($e1485 (ite (= v3 (_ bv0 1)) (bvand v ((_ zero_extend 10) (bvcomp (_ bv0 1) (ite (bvult (_ bv0 4) ((_ extract 3 0) v4)) (_ bv1 1) (_ bv0 1))))) (bvand (_ bv1 11) (bvand v ((_ zero_extend 10) (bvcomp (_ bv0 1) (ite (bvult (_ bv0 4) ((_ extract 3 0) v4)) (_ bv1 1) (_ bv0 1)))))))))))
