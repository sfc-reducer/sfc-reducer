(declare-fun v () (_ BitVec 1))
(assert (let (($e91 (ite (= v (_ bv0 1)) (bvand (bvnot (bvand (_ bv1 12) (concat v (_ bv0 11)))) (bvnot (bvand (bvnot (_ bv1 12)) (bvnot (concat v (_ bv0 11)))))) (bvand (_ bv1 12) (bvand (bvnot (bvand (_ bv1 12) (concat v (_ bv0 11)))) (bvnot (bvand (bvnot (_ bv1 12)) (bvnot (concat v (_ bv0 11))))))))))))
