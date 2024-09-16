(declare-fun bvlambda_7_ ()Bool         )
(declare-fun bvlambda_14_ () (_ BitVec 3))
(declare-fun bvlambda_15_ () (_ BitVec 2))
(declare-fun bvlambda_31_ ()Bool         )
(declare-fun a75 () (Array (_ BitVec 1) (_ BitVec 5)))
(assert
(let (($e77 (concat bvlambda_14_ bvlambda_15_)))
(let (($e86 (store a75 bvlambda_7_ $e77)))
(let (($e87 (select $e86 true       )))
(let (($e144 (store a75 false $e87)))
(let (($e228 (select $e144 bvlambda_31_)))
(
                     not(= $e228 $e77)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    ))                                                                                   )                                                        ))        )                                     )
