(declare-fun bvlambda_8_ ()Bool         )
(declare-fun bvlambda_9_ () (_ BitVec 6))
(declare-fun bvlambda_25_ () (_ BitVec 9))
(declare-fun a99 () (Array (_ BitVec 1) (_ BitVec 16)))
(declare-fun a103 () (Array (_ BitVec 16) (_ BitVec 13)))
(assert
(let (($e16 (_ bv0 16)))
(let (($e25 (_ bv0 2)))
(let (($e223 (store a99 true               $e16  )))
(let (($e428 (select a103 $e16 )))
(let (($e429 (concat $e25 $e428)))
(let (($e431 (concat        bvlambda_25_ bvlambda_8_)))
(let (($e432 (concat $e431 bvlambda_9_)))
(let (($e434 (store $e223 bvlambda_8_ $e432)))
(let (($e435 (select $e434 true       )))
(let (($e436        (bvnot $e435)       ))
(let (($e437 ((_ extract 14 0) $e436)))
                  (bvult $e437 $e429)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  )))) )) ))                                                                                                                                                                                                            )                                                                                                                                                           )        )               )
