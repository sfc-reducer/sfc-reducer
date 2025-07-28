(declare-fun v () (_ BitVec 9))
(declare-fun b () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 16)))
(assert (and (not (= (_ bv0 16) (select (store (store a ((_ bv0 1)) (_ bv0 16)) (extract v) (_ bv0 16)) (_ bv1 1)))) (= (_ bv0 1) (bvand (ite (bvult (_ bv0 16) (select a (_ bv1 1))) (_ bv1 1) (_ bv0 1)) (bvcomp (_ bv0 16) (select (store (store a (_ bv0 1) (_ bv0 16)) (b) (_ bv0 16)) (_ bv0 1)))))))
