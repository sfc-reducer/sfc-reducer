(set-option :check-unsat-cores true)
(declare-fun v () Bool)
(get-qe (forall ((q Int)) v))
