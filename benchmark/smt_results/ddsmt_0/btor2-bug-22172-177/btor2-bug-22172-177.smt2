(declare-fun v () (_ BitVec 1))
(declare-fun a7 () (Array (_ BitVec 5) (_ BitVec 16)))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 6)))
(assert (not (= (select a7 (_ bv0 5)) ((_ zero_extend 15) (ite (bvult (_ bv1 6) (select (store a (_ bv0 1) (_ bv0 6)) (bvnot (ite (bvult (concat v (_ bv0 12)) (bvnot (_ bv1 13))) (_ bv1 1) (_ bv0 1))))) (_ bv1 1) (_ bv0 1))))))
