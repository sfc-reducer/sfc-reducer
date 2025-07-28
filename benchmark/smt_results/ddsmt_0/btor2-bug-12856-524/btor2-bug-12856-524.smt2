(declare-fun v () (_ BitVec 1))
(declare-fun a1 () (Array (_ BitVec 1) (_ BitVec 4)))
(declare-fun a () (Array (_ BitVec 3) (_ BitVec 2)))
(assert (not (= (_ bv0 10) (bvand (_ bv1 10) (concat ((_ zero_extend 4) (select a ((_ bv0 3)))) (select (store a1 (_ bv0 1) (_ bv0 4)) (bvnot (ite (bvult (_ bv1 13) (concat (concat v (_ bv1 10)) (_ bv0 2))) (_ bv1 1) (_ bv0 1)))))))))
