(declare-fun bvlambda_4_ () (_ BitVec 5))
(declare-fun a143 () (Array (_ BitVec 1) (_ BitVec 10)))
(assert
(let (($e1 (_ bv0 1)))
(let (($e13 (_ bv0 9)))
(let (($e18 (_ bv1018 10)))
(let (($e25 (_ bv65534 16)))
(let (($e33 (_ bv416 10)))
(let (($e159        (bvnot $e25)               ))
(let (($e161                    $e159       ))
(let (($e162         $e161              ))
(let (($e166             (bvnot $e162) ))
(let (($e167                    $e166      ))
(let (($e169 (                     bvnot $e167 )))
(let (($e221                                 #b1     ))
(let (($e223                      $e221 ))
(let (($e224 (concat $e13        $e223 )))
(let (($e225 (store a143 $e1 $e224)))
(let (($e327               bvlambda_4_ ))
(let (($e329                           $e327  ))
(let (($e330               $e329                ))
(let (($e331 (   extract      $e330)))
(let (($e332 (store $e225 $e331        $e33 )))
(let (($e333 (select $e332 (bvnot $e1))))
(let (($e478 ((_ extract 7 7) $e169)))
(let (($e479 (select a143 (bvnot $e478))))
(let (($e480 (   extract      $e479)))
(let (($e481               $e18                ))
(let (($e482      (= $e333        $e481 )         ))
                  (= (bvnot $e482) $e480)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 )))))                                                                                                                                                ))))) )                                                                                                     ))) )                                                   ) ))   )) )                                                                                      )       )      )    )           ))
