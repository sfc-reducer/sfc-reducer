(declare-fun bvlambda_29_ () (_ BitVec 7))
(declare-fun bvlambda_46_ () (_ BitVec 12))
(declare-fun bvlambda_49_ () (_ BitVec 1))
(declare-fun a139 () (Array (_ BitVec 9) (_ BitVec 15)))
(declare-fun a142 () (Array (_ BitVec 1) (_ BitVec 12)))
(assert
(let (($e10 (_ bv0 4)))
(let (($e53 (_ bv26 14)))
(let (($e349 (concat $e10 true                )))
(let (($e350 (concat $e349        bvlambda_29_ )))
(let (($e353 (store a142 (not false) $e350)))
(let (($e354 (store $e353 bvlambda_49_ bvlambda_46_)))
(let (($e355 (select $e354 (not false))))
(let (($e356 ((_ extract 9 1) $e355)))
(let (($e357 (select a139 $e356)))
(let (($e358 ((_ extract 13 0) $e357)))
                  (bvult $e358 $e53)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ))))))  ))                                                                                                                                                                                                                           )                                          )         )
