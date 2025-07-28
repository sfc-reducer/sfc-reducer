(declare-fun l () (_ BitVec 1))
(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 12)))
(assert (not (= (_ bv0 1) (bvand (bvnot (bvcomp (_ bv0 12) (select (store a (_ bv0 1) (_ bv0 12)) v))) (bvnot (ite (bvult (_ bv0 12) (select (store a (l) (_ bv0 12)) (_ bv1 1))) (_ bv1 1) (_ bv0 1)))))))
