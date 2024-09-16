(declare-datatype    a      ((b) (not)))
(define-funs-rec ((Bool((x a))Bool))((is-b x)))
(check-sat)
