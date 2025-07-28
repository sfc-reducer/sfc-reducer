(declare-fun a () (Array (_ BitVec 1) (_ BitVec 15)))
(assert (not (= (_ bv0 15) (select (store (store a (_ bv0 1) (_ bv0 15)) (extract (select a (_ bv1 1))) (select a (_ bv0 1))) (_ bv1 1)))))
