(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 6)))
(assert (= (_ bv0 1) (bvand (_ bv1 1) (extract ((bvand (_ bv1 6) (select (store (store a (_ bv1 1) (_ bv1 6)) v (_ bv0 6)) (_ bv1 1))))))))
