(set-logic QF_ABV)
(
 declare-fun z$n1sbv3_bv () (_ BitVec 3))
(declare-fun z$l$253_op_bv () (Array (_ BitVec 3) (_ BitVec 8)))
(declare-fun z$n6sbv3_bv () (_ BitVec 3))
(declare-fun z$l$257_op_bv () (_ BitVec 8))
(declare-fun z$577_bv () (Array (_ BitVec 3) (_ BitVec 8)))
(declare-fun z$581_bv () (_ BitVec 8))
(declare-fun z$5797_bv () (Array (_ BitVec 3) (_ BitVec 8)))
(assert
 (= z$n1sbv3_bv (_ bv1 3)))
(assert
 (= z$l$257_op_bv (select z$l$253_op_bv z$n6sbv3_bv)))
(assert
 (                  distinct z$581_bv z$l$257_op_bv     ))
(assert
 (= z$5797_bv (store z$l$253_op_bv z$n1sbv3_bv z$581_bv )))
(assert
                   (distinct z$577_bv z$5797_bv)       )
(check-sat)
(get-model)
