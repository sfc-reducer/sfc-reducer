(set-logic BV)
(assert
  (forall ((d (_ BitVec 32))                  )
  (forall ((g (_ BitVec 32)))
   (exists ((f (_ BitVec 32)))
    (=          g  (bvand d f)    ) )))  )
(check-sat)
