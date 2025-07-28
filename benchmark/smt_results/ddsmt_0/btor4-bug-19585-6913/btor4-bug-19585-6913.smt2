(declare-fun v () (_ BitVec 1))
(declare-fun v1 () (_ BitVec 11))
(assert (= (_ bv0 1) (extract (ite (= v (_ bv0 1)) ((_ zero_extend 4) (bvcomp (_ bv1 1) (bvand (bvnot (extract v1)) (ite (bvult (_ bv0 10) ((_ extract 9 0) v1)) (_ bv1 1) (_ bv0 1))))) (bvand (_ bv1 5) ((_ zero_extend 4) (bvcomp (_ bv1 1) (bvand (bvnot (extract v1)) (ite (bvult (_ bv0 10) ((_ extract 9 0) v1)) (_ bv1 1) (_ bv0 1))))))))))
