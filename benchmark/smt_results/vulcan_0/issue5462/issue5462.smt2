(declare-fun a () (Array (_ BitVec 32) (_ BitVec 8)))
(declare-fun b () (Array (_ BitVec 32) (_ BitVec 8)))
(declare-fun o () (_ BitVec 1))
(declare-fun i () (_ BitVec 32))
(declare-fun j () (_ BitVec 32))
(declare-fun l () (_ BitVec 32))
(declare-fun m () (_ BitVec 32))
(assert (= (_ bv1 1)
                               (bvnor (ite (= o (ite (=
        (concat (_ bv0 24) (select b         l            ))
              (concat (_ bv0 24) (select b (bvadd i (_ bv2 32))))
                     ) (_ bv1 1) (_ bv0 1))) (_ bv1 1) (_ bv0 1))
 (bvsmod (ite (= o (ite (= i        j            ) (_ bv1 1) (_ bv0
 1))) (_ bv1 1) (_ bv0 1)) (bvadd (ite (= o (ite (= b (store (store
 (store (store a (bvadd j (_ bv3 32)) ((_ extract 7 0)           (_
 bv0  32) )) (bvsdiv m (_ bv2 32)) ((_ extract 7 0)           (_ bv1
 32) )) (bvadd j (_ bv1 32)) ((_ extract 7 0)        j            ))
        j             ((_ extract 7 0) j))) (_ bv1 1) (_ bv0 1))) (_
 bv1 1) (_ bv0 1))
                                            (ite (= o (ite (= j
 (bvadd       (concat (_ bv0 24) (select a (bvnor m (_ bv0 32))))
              (concat (_ bv0 24) (select a (bvadd m (_ bv2 32))))
          )
                     ) (_ bv1 1) (_ bv0 1))) (_ bv1 1) (_ bv0
 1)) )))
                                                              ))
(check-sat)
