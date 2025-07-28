(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 6) (_ BitVec 12)))
(assert (let (($e1185 (ite (= v (_ bv0 1)) (bvand (bvnot (bvand (_ bv1 16) (bvnot ((_ zero_extend 4) (select a (_ bv1 6)))))) (bvnot (bvand (bvnot (_ bv1 16)) ((_ zero_extend 4) (select a (_ bv1 6)))))) (bvand (_ bv1 16) (bvand (bvnot (bvand (_ bv1 16) (bvnot ((_ zero_extend 4) (select a (_ bv1 6)))))) (bvnot (bvand (bvnot (_ bv1 16)) ((_ zero_extend 4) (select a (_ bv1 6))))))))))))
