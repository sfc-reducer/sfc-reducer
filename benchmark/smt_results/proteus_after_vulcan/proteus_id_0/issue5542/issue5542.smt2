(declare-fun b () String)
(declare-fun c () (Seq Int))
(assert (=        b (str.++ b b)))
(assert (distinct (seq.unit 0) (seq.extract c 1 1)))
(assert (= (seq.len c) 1))
(check-sat)
