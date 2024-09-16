(set-logic BV)
(get-qe
  (forall ((d (_ BitVec 32))                  )
  (forall ((g (_ BitVec 32)))
   (exists ((f (_ BitVec 32)))
    (=          g  (bvand d f)    ) )))  )
