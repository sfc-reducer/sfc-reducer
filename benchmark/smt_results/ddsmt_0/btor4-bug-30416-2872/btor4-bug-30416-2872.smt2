(declare-fun v () (_ BitVec 1))
(declare-fun v8 () (_ BitVec 6))
(declare-fun a () (Array (_ BitVec 8) (_ BitVec 2)))
(assert (let (($e1533 (ite (= v (_ bv0 1)) (bvand (concat v8 (_ bv0 7)) (concat (select a (_ bv1 8)) (_ bv0 11))) (bvand (_ bv1 13) (bvand (concat v8 (_ bv0 7)) (concat (select a (_ bv1 8)) (_ bv0 11)))))))))
