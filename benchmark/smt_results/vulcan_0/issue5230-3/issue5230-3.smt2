(set-option :check-unsat-cores true)
(set-option :solve-bv-as-int sum)
(get-qe    (forall ((Bool             (_ BitVec 6)))false))
