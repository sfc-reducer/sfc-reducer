(declare-fun b () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 12) (_ BitVec 14)))
(declare-fun a7 () (Array (_ BitVec 1) (_ BitVec 5)))
(assert (or (= (_ bv0 16) ((_ zero_extend 11) (select (store a7 b (_ bv0 5)) (_ bv1 1)))) (and (= (_ bv0 1) (ite (bvult (_ bv0 15) ((_ zero_extend 14) (bvcomp (_ bv0 5) (ite false (_ bv0 5) (select (store a7 (_ bv0 1) (_ bv0 5)) b))))) (_ bv1 1) (_ bv0 1))) (= (_ bv0 1) (ite (bvult (select a ((_ zero_extend 7) (select a7 (_ bv1 1)))) ((_ zero_extend 6) (bvlshr ((_ zero_extend 3) (select a7 (_ bv1 1))) (_ bv0 8)))) (_ bv1 1) (_ bv0 1))))))
