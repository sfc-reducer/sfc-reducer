(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 2)))
(assert (and (not (= (_ bv0 2) (select (store a (_ bv0 1) (_ bv0 2)) v))) (or (= (_ bv0 1) (ite (bvult (_ bv0 4) ((_ zero_extend 2) (select a (_ bv1 1)))) (_ bv1 1) (_ bv0 1))) (= (_ bv0 1) (ite (bvult (_ bv0 10) ((_ zero_extend 8) (select (store a (v) (_ bv0 2)) (_ bv0 1)))) (_ bv1 1) (_ bv0 1))))))
