(declare-fun v () (_ BitVec 1))
(declare-fun v1 () (_ BitVec 14))
(assert (let (($e1657 (ite (= v (_ bv0 1)) (bvand (bvnot (bvand (_ bv1 14) ((_ zero_extend 13) (bvcomp (_ bv0 1) (bvcomp v1 (_ bv0 14)))))) (bvnot (bvand (bvnot (_ bv1 14)) (bvnot ((_ zero_extend 13) (bvcomp (_ bv0 1) (bvcomp v1 (_ bv0 14)))))))) (bvand (_ bv1 14) (bvand (bvnot (bvand (_ bv1 14) ((_ zero_extend 13) (bvcomp (_ bv0 1) (bvcomp v1 (_ bv0 14)))))) (bvnot (bvand (bvnot (_ bv1 14)) (bvnot ((_ zero_extend 13) (bvcomp (_ bv0 1) (bvcomp v1 (_ bv0 14))))))))))))))
