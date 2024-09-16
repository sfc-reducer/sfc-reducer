(set-option:produce-unsat-assumptions true)
(set-option :solve-bv-as-int sum)
(assert    (exists ((not Bool       ))not  )             )
(check-sat)
