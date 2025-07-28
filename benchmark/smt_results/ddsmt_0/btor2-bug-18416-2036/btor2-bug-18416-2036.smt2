(declare-fun v () (_ BitVec 2))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 2)))
(declare-fun a4 () (Array (_ BitVec 14) (_ BitVec 7)))
(assert (not (= (_ bv0 1) (bvnot (bvcomp (_ bv0 14) ((_ extract 15 2) (bvnot (bvand ((_ zero_extend 14) v) ((_ zero_extend 9) (bvand (select a4 (_ bv0 14)) ((_ zero_extend 5) (select (store (store a (_ bv1 1) (_ bv1 2)) (extract (v)) (_ bv0 2)) (_ bv1 1)))))))))))))
