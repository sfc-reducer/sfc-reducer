(declare-datatype    a      ((b (c (_ BitVec 32)) (d a)) (BitVec)) )
(declare-fun m (a) (_ BitVec 32))
(assert (exists ((a a)) (=             a
                       (ite (=     (c    a ) (m a)) (b (c    a )
             a   )             (d a)  )    )))
(check-sat)
