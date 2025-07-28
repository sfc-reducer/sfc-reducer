(set-option :produce-unsat-cores true)
(set-option :solve-bv-as-int sum)
(check-sat-assuming ((= (_ bv0 35) ((_ repeat 5) (_ bv0 7)))))
