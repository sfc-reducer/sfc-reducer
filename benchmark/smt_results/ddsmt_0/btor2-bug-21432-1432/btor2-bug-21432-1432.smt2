(declare-fun v () (_ BitVec 7))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 2)))
(assert (= (_ bv0 13) ((_ zero_extend 11) (select (store a (_ bv0 1) (_ bv1 2)) (bvnot ((_ extract 10 10) (bvand (bvnot (bvand (_ bv1 13) (bvnot (concat v (_ bv0 6))))) (bvnot (bvand (bvnot (_ bv1 13)) (concat v (_ bv0 6)))))))))))
