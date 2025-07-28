(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 10)))
(assert (not (= (_ bv0 1) (bvand (_ bv1 1) (extract ((select (store (store a (_ bv1 1) (_ bv0 10)) v (_ bv1 10)) (_ bv1 1))))))))
