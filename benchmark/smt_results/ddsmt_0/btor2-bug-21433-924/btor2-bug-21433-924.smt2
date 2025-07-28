(declare-fun v () (_ BitVec 1))
(declare-fun l () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 6)))
(assert (not (= (_ bv0 6) (bvadd (select (store a v (_ bv1 6)) (_ bv1 1)) (select (store a (_ bv0 1) (_ bv0 6)) l)))))
