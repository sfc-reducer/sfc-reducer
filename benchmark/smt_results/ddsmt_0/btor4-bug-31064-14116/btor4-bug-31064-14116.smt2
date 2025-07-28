(declare-fun v () (_ BitVec 10))
(declare-fun v3 () (_ BitVec 13))
(declare-fun v7 () (_ BitVec 12))
(assert (let (($e179 (ite (= (_ bv0 1) (ite (= (extract v) (_ bv0 1)) (_ bv1 1) (_ bv0 1))) ((_ zero_extend 1) (bvand v7 (_ bv1 12))) (bvand v3 ((_ zero_extend 1) (bvand v7 (_ bv1 12)))))))))
