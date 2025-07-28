(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 9) (_ BitVec 8)))
(declare-fun a1 () (Array (_ BitVec 1) (_ BitVec 5)))
(assert (= (bvcomp (_ bv0 5) (bvadd (select a1 (_ bv1 1)) (bvnot (select a1 (_ bv0 1))))) (ite (bvult (_ bv1 8) (bvadd (bvnot (select a (_ bv0 9))) ((_ zero_extend 3) (select (store (store a1 (_ bv0 1) (_ bv0 5)) (v) (_ bv1 5)) (_ bv1 1))))) (_ bv1 1) (_ bv0 1))))
