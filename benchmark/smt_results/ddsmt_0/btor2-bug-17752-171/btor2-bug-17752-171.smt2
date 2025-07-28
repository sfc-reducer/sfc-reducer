(declare-fun l () (_ BitVec 1))
(declare-fun a9 () (Array (_ BitVec 6) (_ BitVec 2)))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 10)))
(assert (not (= (_ bv0 1) (ite (bvult ((_ zero_extend 8) (select a9 (_ bv0 6))) (select (store a (_ bv1 1) (_ bv0 10)) (bvnot (ite (bvult (_ bv1 2) ((_ zero_extend 1) l)) (_ bv1 1) (_ bv0 1))))) (_ bv1 1) (_ bv0 1)))))
