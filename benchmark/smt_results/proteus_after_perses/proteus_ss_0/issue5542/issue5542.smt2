(declare-const a  String)
(declare-const b  String)
(declare-const c  (Seq Int))
(assert (distinct b (str.++ a a)))
(assert (distinct (seq.unit 0) (seq.extract c 1 1)))
(assert (= (seq.len c) 1))
(check-sat)
