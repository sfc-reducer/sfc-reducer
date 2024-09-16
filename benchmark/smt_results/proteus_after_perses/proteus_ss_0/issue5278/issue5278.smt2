(declare-datatype    a      ((b) (c)) )
(define-funs-rec ((d ((x a)) Bool)) ((is-b x)))
(check-sat)
