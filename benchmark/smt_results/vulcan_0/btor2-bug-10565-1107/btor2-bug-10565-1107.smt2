(declare-fun bvlambda_43_ () (_ BitVec 1))
(declare-fun bvlambda_44_ () (_ BitVec 2))
(declare-fun a101 () (Array (_ BitVec 1) (_ BitVec 4)))
(assert
(let (($e5 (_ bv2020 13)))
(let (($e13 (_ bv0 3)))
(let (($e15 (_ bv0 8)))
(let (($e214 (concat $e15  bvlambda_43_)))
(let (($e222 (concat false               $e214)))
(let (($e234 (concat $e13 $e222)))
(let (($e235      (bvult $e5 $e234)         ))
(let (($e378 (concat bvlambda_44_ bvlambda_44_)))
(let (($e379 (store a101 (not false) $e378)))
(let (($e380 (select $e379 (not   $e235))))
             (   extract      $e380)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         )))                                                                                                                                              ))           )       )                                                                                                                                                 ) )       )    )
