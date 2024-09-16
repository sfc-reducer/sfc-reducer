(declare-fun seq3 () (Seq Int))
(declare-fun seq12 () (Seq Int))
(assert (seq.suffixof (seq.++ (seq.unit (seq.len (seq.++ seq12          seq3 ))) seq3) seq12))
(check-sat)
