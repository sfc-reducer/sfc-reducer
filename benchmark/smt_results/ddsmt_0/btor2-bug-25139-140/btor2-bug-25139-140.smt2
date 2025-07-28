(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 5)))
(declare-fun a1 () (Array (_ BitVec 6) (_ BitVec 14)))
(assert (= (_ bv0 1) (bvand (ite (bvult (_ bv1 15) ((_ zero_extend 1) (bvand (select a1 (_ bv0 6)) ((_ zero_extend 9) (select (store a v (_ bv0 5)) (_ bv0 1)))))) (_ bv1 1) (_ bv0 1)) (bvand (bvcomp (_ bv0 12) ((_ zero_extend 7) (select a (_ bv1 1)))) (extract (bvmul (_ bv1 13) ((_ zero_extend 8) (select (store a (_ bv0 1) (_ bv0 5)) v))))))))
