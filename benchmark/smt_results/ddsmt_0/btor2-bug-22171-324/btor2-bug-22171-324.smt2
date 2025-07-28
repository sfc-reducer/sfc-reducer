(declare-fun b () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 4)))
(assert (= (_ bv0 1) (ite (bvult (_ bv0 4) (select (store a (_ bv1 1) (_ bv1 4)) (bvnot b))) (_ bv1 1) (_ bv0 1))))
