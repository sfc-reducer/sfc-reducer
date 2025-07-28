(declare-fun v () (_ BitVec 11))
(declare-fun a () (Array (_ BitVec 13) (_ BitVec 3)))
(assert (let (($e792 (ite (= (_ bv0 1) (extract (select a (_ bv0 13)))) (bvand (bvnot (bvand (_ bv1 15) (concat v (_ bv0 4)))) (bvnot (bvand (bvnot (_ bv1 15)) (bvnot (concat v (_ bv0 4)))))) (bvand (_ bv1 15) (bvand (bvnot (bvand (_ bv1 15) (concat v (_ bv0 4)))) (bvnot (bvand (bvnot (_ bv1 15)) (bvnot (concat v (_ bv0 4))))))))))))
