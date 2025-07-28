(set-option :check-unsat-cores true)
(set-option :solve-bv-as-int sum)
(assert (exists ((q (_ BitVec 6))) true))
(check-sat)
