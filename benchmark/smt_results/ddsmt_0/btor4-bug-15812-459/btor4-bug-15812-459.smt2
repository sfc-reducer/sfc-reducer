(declare-fun v () (_ BitVec 11))
(declare-fun v1 () (_ BitVec 13))
(assert (let (($e1390 (ite (= (_ bv0 1) (ite (bvult (_ bv0 6) ((_ extract 5 0) v1)) (_ bv1 1) (_ bv0 1))) (bvand v1 (concat v (_ bv0 2))) (bvand (_ bv1 13) (bvand v1 (concat v (_ bv0 2)))))))))
