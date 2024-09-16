(declare-datatype    a      ((b) (not )) )
(define-funs-rec ((Bool               ((a a))Bool))((is-b a)))
(check-sat)
