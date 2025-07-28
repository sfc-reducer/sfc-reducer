(declare-fun b () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 13)))
(assert (not (= (_ bv0 1) (bvand (bvnot (bvcomp (_ bv0 13) (select (store a (_ bv0 1) (_ bv0 13)) (bvcomp b (_ bv0 1))))) (ite (bvult (_ bv1 13) (bvnot (bvand (bvnot (_ bv0 13)) (bvnot (select (store a (_ bv0 1) (_ bv0 13)) b))))) (_ bv1 1) (_ bv0 1))))))
