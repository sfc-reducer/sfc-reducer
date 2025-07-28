(declare-fun v () (_ BitVec 13))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 12)))
(assert (= (_ bv0 1) (bvnot (ite (bvult (_ bv0 12) (select (store a (_ bv0 1) (_ bv0 12)) (bvnot (ite (bvult (_ bv1 13) v) (_ bv1 1) (_ bv0 1))))) (_ bv1 1) (_ bv0 1)))))
