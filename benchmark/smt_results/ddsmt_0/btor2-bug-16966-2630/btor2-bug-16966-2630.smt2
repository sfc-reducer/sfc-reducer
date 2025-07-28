(declare-fun b () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 11) (_ BitVec 3)))
(declare-fun a1 () (Array (_ BitVec 1) (_ BitVec 10)))
(assert (= (_ bv0 10) (select (store (store a1 (_ bv1 1) (_ bv1 10)) (b) (concat (_ bv1 7) (select a (_ bv0 11)))) (_ bv1 1))))
