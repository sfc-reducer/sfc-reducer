(declare-sort Loc 0)
(declare-datatypes ((Node 0)) (((node (data Int) (left Loc) (right Loc)))))
(declare-heap (Loc Bool))
(declare-const dv Int)
(declare-const v Loc)
(declare-const l Loc)
(define-fun ten-tree0 ((x Loc) (d Int)) Bool
                                                       (sep (pto v (node dv l l))(and (_ emp Int Int ) (= l (as sep.nil Loc)))                                              )                                  )
(assert (ten-tree0 l dv))
(check-sat)
