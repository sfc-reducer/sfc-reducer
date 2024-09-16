(declare-fun bvlambda_4_ ()Bool         )
(declare-fun bvlambda_26_ ()Bool         )
(declare-fun a112 () (Array (_ BitVec 1) (_ BitVec 7)))
(assert
(let (($e9 (_ bv1326 14)))
(let (($e535 ((_ extract 7 1) $e9  )))
(let (($e536 (store a112  bvlambda_26_ $e535)))
(let (($e537 (select $e536 true )))
(let (($e1198 (store a112 false      $e537)))
(
                  extract(select $e1198 bvlambda_4_)
                                                                                                                      ))                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    )))                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      )        )
