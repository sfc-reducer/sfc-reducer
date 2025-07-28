(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 13)))
(assert (not (= (_ bv0 1) (bvnot (extract (bvnot (select (store (store a (_ bv0 1) (_ bv0 13)) (v) (select a ((_ bv1 1)))) (_ bv1 1))))))))
