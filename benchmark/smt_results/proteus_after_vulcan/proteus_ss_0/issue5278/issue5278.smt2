(declare-datatype    a      ((b) (is-b)) )
(define-funs-rec ((logic              ((a a))Bool))((is-b a)))
(check-sat)
