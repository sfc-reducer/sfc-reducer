(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 7)))
(declare-fun a1 () (Array (_ BitVec 15) (_ BitVec 11)))
(assert (and (= (_ bv0 1) (ite (bvult (select a1 (_ bv0 15)) ((_ zero_extend 4) (select a (_ bv0 1)))) (_ bv1 1) (_ bv0 1))) (= (_ bv0 11) (select a1 ((_ zero_extend 8) (select (store a (_ bv1 1) (_ bv0 7)) (bvnot (extract (bvand (bvnot (bvand (_ bv1 12) (bvnot (concat v (_ bv0 11))))) (bvnot (bvand (bvnot (_ bv1 12)) (concat v (_ bv0 11)))))))))))))
