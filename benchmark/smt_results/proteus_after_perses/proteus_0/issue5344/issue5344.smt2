(declare-datatype    a      ((b (c (_ BitVec 32)) (d a)) (r)) )
(declare-fun m (a) (_ BitVec 32))
(assert                 (=              r
                       (ite (bvugt (c (d r)) (m r)) (b (c    r )
             r   )             (d r)  )    ) )
(check-sat
                               )
