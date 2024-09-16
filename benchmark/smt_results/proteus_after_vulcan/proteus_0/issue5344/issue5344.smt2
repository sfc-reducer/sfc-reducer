(declare-datatype    a      ((b (c (_ BitVec 32)) (d a)) (ite   )) )
(declare-fun m (a) (_ BitVec 32))
(assert (exists ((a a)) (=             a
                       (ite (=     (c    ite)(m ite))(b(c    a )
             a   )             (d a)  )    )))
(check-sat)
