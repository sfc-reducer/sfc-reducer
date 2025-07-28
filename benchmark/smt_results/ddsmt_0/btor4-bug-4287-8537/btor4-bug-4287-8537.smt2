(declare-fun v () (_ BitVec 1))
(declare-fun v7 () (_ BitVec 7))
(assert (let (($e1712 (ite (= v (_ bv0 1)) (bvand (bvnot (bvand v7 (_ bv1 7))) (bvnot (bvand (bvnot v7) (bvnot (_ bv1 7))))) (bvand (_ bv1 7) (bvand (bvnot (bvand v7 (_ bv1 7))) (bvnot (bvand (bvnot v7) (bvnot (_ bv1 7)))))))))))
