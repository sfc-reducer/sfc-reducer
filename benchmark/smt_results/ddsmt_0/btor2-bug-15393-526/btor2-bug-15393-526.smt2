(declare-fun v () (_ BitVec 1))
(declare-fun a9 () (Array (_ BitVec 4) (_ BitVec 8)))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 5)))
(assert (= (_ bv0 1) (bvand (bvcomp (_ bv0 12) ((_ zero_extend 4) (select a9 ((_ extract 4 1) (select a (_ bv1 1)))))) (ite (bvult (bvlshr (_ bv0 16) (_ bv0 16)) ((_ zero_extend 11) (select (store (store a (_ bv0 1) (_ bv0 5)) v (_ bv1 5)) (_ bv1 1)))) (_ bv1 1) (_ bv0 1)))))
