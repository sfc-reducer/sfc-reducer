(declare-fun v10 () (_ BitVec 1))
(declare-fun bvlambda_18_ ()Bool         )
(declare-fun a75 () (Array (_ BitVec 1) (_ BitVec 6)))
(assert
(let (($e4 (_ bv3032 13)))
(let (($e5 (_ bv0 5)))
(let (($e7 (_ bv0 11)))
(let (($e245 ((_ extract 6 1) $e4  )))
(let (($e247         $e245                     ))
(let (($e254 (store a75   bvlambda_18_ $e245)))
(let (($e270 (concat $e5        bvlambda_18_)))
(let (($e272 (concat $e7 bvlambda_18_)))
(let (($e273 (concat $e272 bvlambda_18_)))
(let (($e274      (bvult $e273        $e4 )         ))
(let (($e275 (store $e254 v10 $e270)))
(let (($e276 (select $e275 (bvnot $e274))))
(let (($e277      (= $e276 $e270)         ))
             (bvand v10 $e277)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             )))))) )               )      ) )                                                                                                                                                                                                  ) ))   )
