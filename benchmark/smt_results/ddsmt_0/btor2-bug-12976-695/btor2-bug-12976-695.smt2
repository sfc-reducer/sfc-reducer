(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 11)))
(assert (= (_ bv0 1) (bvand (_ bv1 1) (extract (select (store (store a (_ bv1 1) (_ bv1 11)) v (_ bv0 11)) (_ bv1 1))))))
