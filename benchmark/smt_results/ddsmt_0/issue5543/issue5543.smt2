(declare-fun e () (Seq Int))
(declare-fun f () (Seq Int))
(assert (distinct (seq.unit f) (seq.unit e)))
(check-sat)
