(declare-const seq11  (Seq Int))
(declare-const i5  Int)
(declare-const v17  Bool)
(declare-const v24  Bool)
(assert (xor v17 v24           (seq.prefixof                   seq11   (seq.unit i5))))
(check-sat)
