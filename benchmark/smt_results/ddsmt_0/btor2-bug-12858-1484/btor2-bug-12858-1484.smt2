(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 4)))
(assert (not (= (_ bv0 1) (bvand (bvnot (bvcomp (_ bv0 4) (select (store a (_ bv0 1) (_ bv0 4)) (v)))) (bvcomp (_ bv0 4) (select (store a (extract (ite (= v (_ bv0 1)) (_ bv1 16) (_ bv0 16))) (_ bv0 4)) (_ bv1 1)))))))
