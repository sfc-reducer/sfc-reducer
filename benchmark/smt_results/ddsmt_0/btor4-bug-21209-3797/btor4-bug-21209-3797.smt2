(declare-fun v () (_ BitVec 6))
(declare-fun a () (_ BitVec 1))
(assert (= (_ bv0 1) (extract (ite (= a (_ bv0 1)) ((_ zero_extend 12) (bvcomp (_ bv1 1) (bvand (bvnot (extract (_ bv0 6))) (ite (bvult ((_ extract 4 0) v) (_ bv1 5)) (_ bv1 1) (_ bv0 1))))) (bvand (_ bv1 13) ((_ zero_extend 12) (bvcomp (_ bv1 1) (bvand (bvnot (extract v)) (ite (bvult ((_ extract 4 0) v) (_ bv1 5)) (_ bv1 1) (_ bv0 1))))))))))
