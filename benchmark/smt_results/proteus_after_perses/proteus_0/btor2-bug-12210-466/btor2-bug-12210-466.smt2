(declare-fun bvlambda_4_ ()Bool         )
(declare-fun a46 () (Array (_ BitVec 8) (_ BitVec 11)))
(declare-fun a47 () (Array (_ BitVec 1) (_ BitVec 5)))
(assert
(let (($e10 (_ bv0 4)))
(let (($e13 (_ bv0 2)))
(let (($e17 (_ bv234 8)))
(let (($e19 (_ bv30 5)))
(let (($e113 (select a47 false              )))
(let (($e116 (store a47 true       $e19 )))
(let (($e117 (store $e116 bvlambda_4_        $e113)))
(let (($e118 (select $e117 true       )))
(let (($e119 (concat $e10 $e118)))
(let (($e123 (concat $e13 $e119)))
(let (($e127 (select a46        $e17 )))
                  (bvult        $e127  $e123)
                                                                                                                        )   )   ))))  )                                                                                    ) )   )  )         )
