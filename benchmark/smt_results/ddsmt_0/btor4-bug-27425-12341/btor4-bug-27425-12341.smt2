(declare-fun v () (_ BitVec 8))
(assert (let (($e1889 (ite (= (extract v) (_ bv0 1)) (bvand (bvnot (bvand (_ bv1 16) (concat v (_ bv0 8)))) (bvnot (bvand (bvnot (_ bv1 16)) (bvnot (concat v (_ bv0 8)))))) (bvand (_ bv1 16) (bvand (bvnot (bvand (_ bv1 16) (concat v (_ bv0 8)))) (bvnot (bvand (bvnot (_ bv1 16)) (bvnot (concat v (_ bv0 8))))))))))))
