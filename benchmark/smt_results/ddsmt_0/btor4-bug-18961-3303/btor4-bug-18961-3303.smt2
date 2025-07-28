(declare-fun v () (_ BitVec 1))
(declare-fun v1 () (_ BitVec 10))
(declare-fun a () (Array (_ BitVec 10) (_ BitVec 2)))
(assert (= (_ bv0 4) ((_ zero_extend 2) (ite (= v (_ bv0 1)) ((_ zero_extend 1) (bvcomp (_ bv1 1) (bvand (bvnot (extract v1)) (ite (bvult (_ bv0 9) ((_ extract 8 0) v1)) (_ bv1 1) (_ bv0 1))))) (bvand (select a (_ bv0 10)) ((_ zero_extend 1) (bvcomp (_ bv1 1) (bvand (bvnot (extract v1)) (ite (bvult (_ bv0 9) ((_ extract 8 0) v1)) (_ bv1 1) (_ bv0 1))))))))))
