(declare-fun v () (_ BitVec 1))
(declare-fun v1 () (_ BitVec 5))
(assert (let (($e362 (ite (= v (_ bv0 1)) (bvand (bvnot (bvand v1 (_ bv1 5))) (bvnot (bvand (bvnot v1) (bvnot (_ bv1 5))))) (bvand (_ bv1 5) (bvand (bvnot (bvand v1 (_ bv1 5))) (bvnot (bvand (bvnot v1) (bvnot (_ bv1 5)))))))))))
