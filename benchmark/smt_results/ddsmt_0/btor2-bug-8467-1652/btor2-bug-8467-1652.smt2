(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 4)))
(assert (= (_ bv0 14) (bvand (_ bv1 14) ((_ zero_extend 10) (select (store (store a (_ bv1 1) (_ bv1 4)) v (_ bv0 4)) (_ bv1 1))))))
