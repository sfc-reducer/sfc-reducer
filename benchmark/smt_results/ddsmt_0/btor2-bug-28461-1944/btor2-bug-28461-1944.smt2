(declare-fun v () (_ BitVec 1))
(declare-fun b () (_ BitVec 4))
(declare-fun a () (Array (_ BitVec 1) (_ BitVec 6)))
(assert (= (_ bv0 1) (bvnot (ite (bvult (_ bv0 6) (select (store a (_ bv0 1) (_ bv0 6)) (bvnot (extract (bvand (bvnot (concat v (_ bv0 14))) (bvnot (concat b (_ bv0 11)))))))) (_ bv1 1) (_ bv0 1)))))
