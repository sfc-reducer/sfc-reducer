(declare-fun v7 ()Bool         )
(declare-fun bvlambda_18_ ()Bool         )
(declare-fun bvlambda_27_ ()Bool         )
(declare-fun bvlambda_28_ ()Bool         )
(declare-fun bvlambda_29_ () (_ BitVec 2))
(declare-fun bvlambda_34_ () (_ BitVec 9))
(declare-fun bvlambda_35_ ()Bool         )
(declare-fun a139 () (Array (_ BitVec 1) (_ BitVec 4)))
(assert
(let (($e1 false    ))
(let (($e8 (_ bv8 4)))
(let (($e36 (_ bv1246 12)))
(let (($e41 (_ bv0 7)))
(let (($e225        $e8                      ))
(let (($e226              v7 ))
(let (($e228                       $e226 ))
(let (($e229               $e228               ))
(let (($e231                    $e229       ))
(let (($e232         $e231             ))
(let (($e234                          $e232 ))
(let (($e235                  $e234 ))
(let (($e236 (concat bvlambda_27_ bvlambda_28_)))
(let (($e237 (concat $e236 bvlambda_29_)))
(let (($e238 (store a139 $e1 $e237)))
(let (($e239 (store $e238 $e235 $e225)))
(let (($e315 (select a139 true       )))
(let (($e316 (concat $e41 $e315)))
(let (($e317 (concat bvlambda_18_ bvlambda_34_)))
(let (($e318 (concat $e317 bvlambda_35_)))
(let (($e319      (bvult $e318 $e316)         ))
(let (($e320                                    $e319  ))
(let (($e321               $e320                ))
(let (($e376        $e36               ))
(let (($e377               $e376                ))
(let (($e378 ((_ extract 10 0) $e377)))
(let (($e379 (select $e239 true       )))
(let (($e380 (concat $e41 $e379)))
(let (($e381      (bvult $e380        $e378 )         ))
(let (($e383              $e381 ))
(let (($e386               (bvnot $e383)          ))
(let (($e387         $e386                ))
(let (($e389        (bvnot $e387)               ))
(let (($e390        (bvnot $e389)               ))
             (bvand (bvnot $e390) $e321)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       )) ))  ) ))))))                                                      )))))))                                                                           )))))) )) )) ))                                                                                                                                                )    )                           )      ))
