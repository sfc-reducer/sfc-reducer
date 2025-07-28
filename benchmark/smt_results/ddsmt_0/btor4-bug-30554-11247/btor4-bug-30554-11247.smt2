(declare-fun v () (_ BitVec 1))
(declare-fun v1 () (_ BitVec 13))
(assert (let (($e513 (ite (= v (_ bv0 1)) (bvand (bvnot (bvand v1 (_ bv1 13))) (bvnot (bvand (bvnot v1) (bvnot (_ bv1 13))))) (bvand (_ bv1 13) (bvand (bvnot (bvand v1 (_ bv1 13))) (bvnot (bvand (bvnot v1) (bvnot (_ bv1 13)))))))))))
