(declare-fun bvlambda_20_ ()Bool         )
(declare-fun a88 () (Array (_ BitVec 1) (_ BitVec 12)))
(assert
(let (($e15 (_ bv0 5)))
(let (($e16 (_ bv54 6)))
(let (($e18 (_ bv0 7)))
(let (($e105 (concat $e18  $e15        )))
(let (($e108 (store a88 bvlambda_20_ $e105)))
(let (($e194 (select $e108 true       )))
(let (($e204 (concat        $e15  bvlambda_20_)))
(let (($e208      (bvult $e204        $e16 )         ))
(let (($e211 (store a88 false      $e194)))
(let (($e212 (select $e211        $e208 )))
                  (bvult $e212 $e194)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         ))  )   )         )                                                                                     )  )                                                            ) ))              )
