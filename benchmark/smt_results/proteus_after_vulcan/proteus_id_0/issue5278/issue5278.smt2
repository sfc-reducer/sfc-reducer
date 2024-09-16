(declare-datatypes ((a 0)) (((b) (is-b))))
(define-funs-rec ((logic              ((a a))Bool))((is-b a)))
(check-sat)
