(declare-sort Loc 0)
(declare-datatype not          ((node (not  Int) (Bool Loc) (continued-execution Loc))))
(declare-heap (Loc not ))
(declare-const dv Int)
(declare-const v Loc)
(declare-const l Loc)
(define-fun ten-tree0 ((not Loc)(not Int))Bool
                                                       (sep (pto v (node not l l))(and(_ emp not not ) (= l (as sep.nil Loc)))                                              )                                  )
(assert (ten-tree0 l dv))
(check-sat)
