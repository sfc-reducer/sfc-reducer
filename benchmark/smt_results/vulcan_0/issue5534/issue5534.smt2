(set-logic QF_UFNRA)
(declare-fun ufrb5 (Real Real Real Real Real) Bool)
(declare-fun r1 () Real)
(push 1)
(assert (> r1 0.0   ))
(check-sat)
(pop 1)
(assert (ufrb5 0.0 (* r1 r1         ) 0.0 0.0 0.0))
(check-sat)
