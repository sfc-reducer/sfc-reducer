(set-option :solve-bv-as-int sum)
(declare-fun uf6 (Bool Bool Bool Bool Bool Bool) Bool)
(declare-fun uf7 (Bool Bool Bool Bool Bool Bool Bool) Bool)
(assert (uf7 true true true true true true true))
(check-sat)
(assert (uf6 true true true true (uf7 true true true true true true true) true))
(check-sat)
