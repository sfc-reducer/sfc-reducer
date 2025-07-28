(declare-fun s () (Seq Int))
(declare-fun e () (Seq Int))
(assert (seq.suffixof (seq.++ s (seq.unit (seq.len (seq.++ s (seq.rev s))))) e))
(check-sat)
