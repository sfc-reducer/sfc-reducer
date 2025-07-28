(set-option :check-unsat-cores true)
(set-option :solve-bv-as-int sum)
(check-sat-assuming ((distinct (_ bv0 7) (bvlshr (_ bv0 7) (_ bv0 7)))))
