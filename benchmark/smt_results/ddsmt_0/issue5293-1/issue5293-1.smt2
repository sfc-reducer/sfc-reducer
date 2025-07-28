(declare-const b (_ BitVec 1))
(set-option :solve-bv-as-int sum)
(assert (forall ((q (_ BitVec 56))) (not (bvugt q (bvudiv (_ bv0 56) ((_ zero_extend 55) b))))))
(check-sat)
