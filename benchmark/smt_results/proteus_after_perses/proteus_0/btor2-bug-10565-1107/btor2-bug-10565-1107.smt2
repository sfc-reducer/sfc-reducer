(declare-fun bvlambda_44_ () (_ BitVec 2))
(declare-fun a101 () (Array (_ BitVec 1) (_ BitVec 4)))
(assert
(let (($e5 (_ bv2020 13)))
(let (($e13 (_ bv0 3)))
(let (($e214 (concat $e5   bvlambda_44_)))
(let (($e228 ((_ extract 9 0) $e214)))
(let (($e234 (concat $e13 $e228)))
(let (($e235      (bvult $e5 $e234)         ))
(let (($e378 (concat bvlambda_44_ bvlambda_44_)))
(let (($e379 (store a101 true        $e378)))
(
                 extract(select $e379(not   $e235))
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         )))                                                                                                                                              ))     )             )                                                                                                                                                   )       )    )
