(declare-fun bvlambda_1_ ()Bool         )
(declare-fun a77 () (Array (_ BitVec 1) (_ BitVec 2)))
(assert
(let (($e22 (_ bv2 2)))
(let (($e246 (store a77 true               $e22 )))
(let (($e394 (concat true true                  )))
(let (($e396 (select $e246 (not   bvlambda_1_))))
(
not                       (bvult $e396 $e394)
                                                                                                                                                                                                                                                                                                                                                                               )) )                                                                                                                                                   )                                                                                                                                                                                                     )                     )
