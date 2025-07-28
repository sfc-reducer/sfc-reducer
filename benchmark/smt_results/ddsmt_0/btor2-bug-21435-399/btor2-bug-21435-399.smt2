(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 5)))
(assert (= (_ bv0 1) (bvnot (ite (bvult (_ bv0 4) ((_ zero_extend 3) (bvnot (ite (bvult ((_ zero_extend 8) (select (store (store a (_ bv1 1) (_ bv0 5)) v (_ bv1 5)) (_ bv1 1))) (_ bv1 13)) (_ bv1 1) (_ bv0 1))))) (_ bv1 1) (_ bv0 1)))))
