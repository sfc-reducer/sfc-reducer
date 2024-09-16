(declare-fun a () (Array (_ BitVec 32) (_ BitVec 8)))
(declare-fun b () (Array (_ BitVec 32) (_ BitVec 8)))
(declare-fun c () (_ BitVec 1))
(declare-fun n () (_ BitVec 1))
(declare-fun e () (_ BitVec 1))
(declare-fun f () (_ BitVec 1))
(declare-fun o () (_ BitVec 1))
(declare-fun i () (_ BitVec 32))
(declare-fun j () (_ BitVec 32))
(declare-fun k () (_ BitVec 32))
(declare-fun l () (_ BitVec 32))
(declare-fun m () (_ BitVec 32))
(assert (= (_ bv1 1)        (bvmul (ite (= o              (_ bv1 1)
        ) (_ bv1 1) (_ bv0 1)) (bvnor (ite (= f (ite (=
        (concat (_ bv0 24) (select b         i            ))
              (concat (_ bv0 24) (select b (bvadd i (_ bv2 32))))
                   (concat (_ bv0 24) (select b (bvadd i (_ bv3
 32))))              ) (_ bv1 1) (_ bv0 1))) (_ bv1 1) (_ bv0 1))
 (bvsmod (ite (= e (ite (= i (bvadd j (_ bv4 32))) (_ bv1 1) (_ bv0
 1))) (_ bv1 1) (_ bv0 1)) (bvshl (ite (= n (ite (= b (store (store
 (store (store a (bvadd j (_ bv3 32)) ((_ extract 7 0)           (_
 bv24 32) )) (bvsdiv j (_ bv2 32)) ((_ extract 7 0)           (_ bv16
 32) )) (bvadd j (_ bv1 32)) ((_ extract 7 0)        l            ))
        j             ((_ extract 7 0) l))) (_ bv1 1) (_ bv0 1))) (_
 bv1 1) (_ bv0 1))
                                            (ite (= c (ite (= k
 (bvadd (bvor (concat (_ bv0 24) (select a (bvnor m (_ bv0 32))))
 (       concat (_ bv0 24) (select a (bvadd m (_ bv1 32)))
    ))        (concat (_ bv0 24) (select a (bvadd m (_ bv2 32))))
          )        (concat (_ bv0 24) (select a (bvadd m (_ bv3
 32))))              ) (_ bv1 1) (_ bv0 1))) (_ bv1 1) (_ bv0
 1)) ))))
                                                              ))
(check-sat)
