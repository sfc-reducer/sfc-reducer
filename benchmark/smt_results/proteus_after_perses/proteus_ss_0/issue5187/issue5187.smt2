(set-logic QF_AUFNIA)
(declare-const _substvar_77_  Int)
(declare-const _substvar_82_  Int)
(declare-const v11 Bool)
(declare-const arr (Array Bool Int))
(assert (= (* 469 _substvar_77_) (div 174 (div 81 81))))
(assert (< 0 (*           (select (store arr true 81) v11) (+ _substvar_82_ 174   ))))
(check-sat)
(reset-assertions)
(check-sat)
