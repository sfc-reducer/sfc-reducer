(declare-fun bvlambda_8_ ()Bool         )
(declare-fun bvlambda_28_ ()Bool         )
(declare-fun bvlambda_29_ () (_ BitVec 6))
(declare-fun a114 () (Array (_ BitVec 1) (_ BitVec 11)))
(assert
(let (($e31 (_ bv1984 11)))
(let (($e33 (_ bv0 4)))
(let (($e66 (_ bv50 10)))
(let (($e538 (concat        $e33  bvlambda_28_)))
(let (($e539 (concat $e538 bvlambda_29_)))
(let (($e540                           $e539       ))
(let (($e541 (store a114 true               $e31 )))
(let (($e542 (store $e541 bvlambda_8_ $e540)))
(let (($e543 (select $e542 true       )))
(let (($e544 ((_ extract 9 0) $e543)))
                  (bvult $e544 $e66)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             )))))))                                                                                                                                                                                                                                                                                                                                                                                                                                               )                                ) )                              )
