(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 10)))
(assert (= (_ bv0 1) (ite (bvult (concat (bvnot (_ bv0 5)) (select (store a (_ bv1 1) (_ bv0 10)) (bvnot v))) (bvnot (_ bv0 15))) (_ bv1 1) (_ bv0 1))))
