(declare-fun bvlambda_3_ ()Bool         )
(declare-fun a73 () (Array (_ BitVec 1) (_ BitVec 13)))
(assert
(let (($e9 (_ bv0 13)))
(let (($e78 (select a73 false      )))
(let (($e103 (store a73 false        $e78 )))
(let (($e167 (store $e103        bvlambda_3_ $e9)))
(let (($e213 (select a73 true                 )))
(let (($e275 (select $e167 true       )))
                  (bvult $e275 $e213)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          )                                                             )                                             )                                                               )                        )                                        )        )
