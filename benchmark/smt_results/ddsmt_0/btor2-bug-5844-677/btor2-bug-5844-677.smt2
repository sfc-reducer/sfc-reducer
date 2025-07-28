(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 5)))
(assert (= (_ bv0 1) (bvand (bvcomp (_ bv0 14) ((_ zero_extend 9) (select a (_ bv1 1)))) (bvcomp (_ bv0 12) ((_ extract 15 4) ((_ zero_extend 11) (select (store (store a (_ bv0 1) (_ bv1 5)) v (_ bv0 5)) (_ bv1 1))))))))
