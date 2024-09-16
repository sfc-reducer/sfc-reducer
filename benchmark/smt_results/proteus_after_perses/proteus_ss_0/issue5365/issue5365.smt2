(set-logic BV)
(assert
  (exists ((d (_ BitVec 32))                  )
  (forall ((g (_ BitVec 32)))
   (exists ((f (_ BitVec 32)))
    (=          g  (bvand d f)    ) )))  )
(check-sat)
