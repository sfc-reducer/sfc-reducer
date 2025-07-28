(declare-fun b () (_ BitVec 9))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 15)))
(assert (not (= (_ bv0 1) (bvnot (bvcomp (_ bv0 15) (select (store (store a (_ bv1 1) (_ bv0 15)) (extract b) (_ bv1 15)) (_ bv1 1)))))))
