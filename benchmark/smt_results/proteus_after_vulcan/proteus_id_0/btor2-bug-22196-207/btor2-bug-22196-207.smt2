(declare-fun bvlambda_2_ () (_ BitVec 1))
(declare-fun bvlambda_8_ ()Bool         )
(declare-fun a111 () (Array (_ BitVec 1) (_ BitVec 4)))
(assert
(let (($e9 (_ bv0 4)))
(let (($e25 (_ bv0 12)))
(let (($e50 (_ bv0 11)))
(let (($e132 (concat $e25 $e9  )))
(let (($e145 (store a111 false       $e9 )))
(let (($e146 (select $e145 bvlambda_8_)))
(let (($e147 (concat $e50 $e146)))
(let (($e149 (concat bvlambda_2_ $e147)))
(let (($e150      (bvult $e132 $e149)         ))
(let (($e152 (select $e145 true       )))
(let (($e186 (store $e145 false $e152)))
(let (($e187 (select $e186 bvlambda_2_)))
(let (($e192 (   extract        $e187)))
             (bvult        $e192         $e150 )
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  )    ))                                 ) )) )))            )                                                 )                        )               )        )
