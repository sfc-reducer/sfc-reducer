(declare-fun bvlambda_11_ ()Bool         )
(declare-fun a73 () (Array (_ BitVec 1) (_ BitVec 13)))
(assert
(let (($e1 (_ bv0 1)))
(let (($e7 (_ bv0 10)))
(let (($e9 (_ bv3942 13)))
(let (($e18 false    ))
(let (($e78 (select a73 $e18)))
(let (($e103 (store a73   $e1        $e78 )))
(let (($e167 (store $e103        bvlambda_11_ $e9)))
(let (($e213 (select a73   (bvnot $e18))))
(let (($e257             $e213                        ))
(let (($e275 (select $e167 true       )))
                  (bvult $e275 $e213)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          )                 )                                           )                                             )                                                               )                        )                               )        ) )     ))
