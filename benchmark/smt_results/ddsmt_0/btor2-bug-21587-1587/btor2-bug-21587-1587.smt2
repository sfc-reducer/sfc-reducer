(declare-fun b () (_ BitVec 15))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 13)))
(assert (not (= (_ bv0 1) (extract (select (store a (_ bv0 1) (_ bv0 13)) (bvnot (ite (bvult (_ bv1 15) b) (_ bv1 1) (_ bv0 1))))))))
