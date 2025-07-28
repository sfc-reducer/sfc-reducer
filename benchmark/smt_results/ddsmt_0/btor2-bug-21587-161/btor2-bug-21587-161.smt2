(declare-fun b () (_ BitVec 1))
(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 15)))
(assert (or (= (_ bv0 15) (select (store a v (_ bv0 15)) (_ bv1 1))) (= (_ bv0 1) (extract (select (store a (_ bv0 1) (_ bv1 15)) (b))))))
