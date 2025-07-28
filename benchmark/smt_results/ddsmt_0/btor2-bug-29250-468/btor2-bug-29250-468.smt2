(declare-fun a () (Array (_ BitVec 1) (_ BitVec 4)))
(declare-fun a7 () (Array (_ BitVec 15) (_ BitVec 6)))
(declare-fun a78 () (Array (_ BitVec 11) (_ BitVec 6)))
(assert (and (= (_ bv0 4) (select a (_ bv1 1))) (= (_ bv0 1) ((_ extract 5 5) (bvmul (bvurem (select a78 (_ bv0 11)) ((_ zero_extend 5) (ite (bvult (_ bv0 16) (ite (= (_ bv0 1) (extract (concat (_ bv1 10) (select (store a (extract (select a7 ((_ zero_extend 9) (select a78 (_ bv0 11))))) (_ bv0 4)) (_ bv0 1))))) (_ bv0 16) (_ bv1 16))) (_ bv1 1) (_ bv0 1)))) ((_ zero_extend 2) (select (store a (_ bv0 1) (_ bv0 4)) (extract (select a7 ((_ zero_extend 9) (select a78 (_ bv0 11))))))))))))
