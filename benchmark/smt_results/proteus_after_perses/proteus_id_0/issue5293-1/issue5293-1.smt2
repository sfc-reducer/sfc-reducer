(set-option :solve-bv-as-int sum)
(declare-const bv_56-0 (_ BitVec 56))
(assert (forall (                                     (q4 (_ BitVec 56))) (=> (bvugt q4 (bvudiv bv_56-0 bv_56-0)) false)))
(check-sat)
