(declare-fun v () (_ BitVec 1))
(declare-fun v1 () (_ BitVec 3))
(assert (let (($e1353 (ite (= v (_ bv0 1)) (bvand (bvnot (bvand (_ bv1 10) ((_ zero_extend 7) v1))) (bvnot (bvand (bvnot (_ bv1 10)) (bvnot ((_ zero_extend 7) v1))))) (bvand (_ bv1 10) (bvand (bvnot (bvand (_ bv1 10) ((_ zero_extend 7) v1))) (bvnot (bvand (bvnot (_ bv1 10)) (bvnot ((_ zero_extend 7) v1)))))))))))
