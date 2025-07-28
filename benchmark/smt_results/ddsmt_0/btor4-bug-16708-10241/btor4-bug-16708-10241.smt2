(declare-fun v () (_ BitVec 4))
(declare-fun v1 () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 4) (_ BitVec 9)))
(assert (let (($e513 (ite (= v1 (_ bv0 1)) (bvand (_ bv1 12) (concat v (_ bv0 8))) (bvand ((_ zero_extend 3) (select a (_ bv1 4))) (bvand (_ bv1 12) (concat v (_ bv0 8)))))))))
