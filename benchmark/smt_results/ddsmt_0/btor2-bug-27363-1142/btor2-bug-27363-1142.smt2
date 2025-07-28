(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 2)))
(assert (= (_ bv0 1) (bvand (ite (bvult (_ bv0 3) ((_ zero_extend 1) (select (store a ((v)) (_ bv1 2)) (_ bv0 1)))) (_ bv1 1) (_ bv0 1)) (bvand (bvcomp (_ bv0 2) (select a (_ bv1 1))) (bvcomp (_ bv0 1) (extract (select (store a (_ bv0 1) (_ bv1 2)) (extract (bvlshr (_ bv1 16) ((_ zero_extend 15) v))))))))))
