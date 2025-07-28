(declare-fun v () (_ BitVec 1))
(declare-fun b () (_ BitVec 4))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 5)))
(assert (= (ite (bvult ((_ zero_extend 8) (select (store a (extract (bvadd (_ bv1 11) ((_ zero_extend 7) b))) (_ bv0 5)) (_ bv1 1))) (bvnot (_ bv1 13))) (_ bv1 1) (_ bv0 1)) (bvnot (bvcomp (_ bv0 5) ((select (store a (_ bv0 1) (_ bv0 5)) v))))))
