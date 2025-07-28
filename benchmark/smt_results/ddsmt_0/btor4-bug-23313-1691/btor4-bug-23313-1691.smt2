(declare-fun v () (_ BitVec 16))
(declare-fun v2 () (_ BitVec 16))
(declare-fun v22 () (_ BitVec 11))
(assert (let (($e632 (ite (= (_ bv0 1) (ite (bvult v22 (_ bv1 11)) (_ bv1 1) (_ bv0 1))) (bvand v v2) (bvand (_ bv1 16) (bvand v v2)))))))
