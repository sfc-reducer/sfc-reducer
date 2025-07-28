(declare-fun v () (_ BitVec 1))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 6)))
(assert (= (_ bv0 1) (bvand (bvcomp (_ bv0 6) (select (store a v (_ bv0 6)) (_ bv0 1))) (bvand (extract (concat (_ bv1 7) (select a (_ bv1 1)))) (bvcomp (_ bv0 13) (ite false (_ bv0 13) ((_ zero_extend 7) (select (store a (_ bv0 1) (_ bv1 6)) v))))))))
