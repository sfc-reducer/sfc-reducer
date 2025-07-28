(declare-fun v () (_ BitVec 1))
(declare-fun v1 () (_ BitVec 9))
(declare-fun a () (Array (_ BitVec 11) (_ BitVec 1)))
(assert (let (($e1042 (ite (= v (_ bv0 1)) (bvand v1 (_ bv1 9)) (bvand (bvand v1 (_ bv1 9)) ((_ zero_extend 8) (select a (_ bv0 11)))))))))
