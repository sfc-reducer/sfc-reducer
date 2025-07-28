(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 11)))
(assert (and (= (_ bv0 11) (select a (_ bv1 1))) (= (_ bv0 1) (ite (bvult ((_ extract 9 0) (ite false (_ bv0 11) (concat ((_ extract 9 0) (ite false (_ bv0 11) (concat ((_ bv0 1)) (bvnot (_ bv0 10))))) (extract (select (store a (_ bv0 1) ((_ zero_extend 3) (bvlshr (_ bv0 8) (_ bv0 8)))) (extract (select (store (store a (_ bv0 1) (_ bv0 11)) v (_ bv0 11)) (_ bv1 1)))))))) ((_ extract 9 0) (ite false (_ bv0 11) (concat ((_ bv0 1)) (bvnot (_ bv0 10)))))) (_ bv1 1) (_ bv0 1)))))
