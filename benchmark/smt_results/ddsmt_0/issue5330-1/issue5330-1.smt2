(declare-fun s () String)
(declare-fun t () String)
(assert (str.in_re (str.replace t s t) (str.to_re "AN")))
(check-sat)
