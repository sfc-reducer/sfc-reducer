(reset                       )
(set-option :check-unsat-cores true)
(set-option :produce-unsat-assumptions true)
(check-sat-assuming (false))
(get-unsat-assumptions)
