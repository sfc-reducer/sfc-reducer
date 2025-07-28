(declare-fun v () (_ BitVec 16))
(declare-fun v1 () (_ BitVec 1))
(declare-fun v12 () (_ BitVec 2))
(assert (let (($e388 (ite (= v1 (_ bv0 1)) (bvand (_ bv1 16) ((_ zero_extend 8) (ite false (_ bv0 8) (bvlshr (concat v12 (_ bv0 6)) (_ bv1 8))))) (bvand v (bvand (_ bv1 16) ((_ zero_extend 8) (ite false (_ bv0 8) (bvlshr (concat v12 (_ bv0 6)) (_ bv1 8)))))))))))
