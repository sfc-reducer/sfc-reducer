(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 7)))
(assert (and (not (= (_ bv0 7) (select a (_ bv1 1)))) (= (_ bv0 1) (bvand (ite (bvult (_ bv0 10) ((_ zero_extend 3) (select (store a v (_ bv0 7)) (_ bv0 1)))) (_ bv1 1) (_ bv0 1)) (ite (bvult (_ bv0 6) ((_ extract 5 0) (select (store a (_ bv0 1) (_ bv1 7)) v))) (_ bv1 1) (_ bv0 1))))))
