(declare-fun v1 () (_ BitVec 5))
(declare-fun v10 () (_ BitVec 11))
(declare-fun v12 () (_ BitVec 14))
(declare-fun v13 () (_ BitVec 10))
(declare-fun a57 () (Array (_ BitVec 14) (_ BitVec 6)))
(assert
(let (($e7 (_ bv0 6)))
(let (($e15 (_ bv0 4)))
(let (($e23 (_ bv1 8)))
(let (($e28 (_ bv0 9)))
(let (($e94 ((_ extract 9 0) v10)))
(let (($e95             v13 ))
(let (($e96                  $e95 ))
(let (($e97      (bvult $e96 $e94)         ))
(let (($e98 (   extract        v10)))
(let (($e100                     $e98 ))
(let (($e102                             $e100  ))
(let (($e103 (bvand $e102 $e97)))
(let (($e104                      (bvnot $e103) ))
(let (($e105             (bvnot $e104)          ))
(let (($e106 (concat $e15 $e105)))
(let (($e107 (bvand v1 $e106)))
(let (($e289        a57             ))
(let (($e316                      $e23 ))
(let (($e318                    $e316       ))
(let (($e319         $e318       ))
(let (($e334                    $e319      ))
(let (($e335               $e334                ))
(let (($e336        $e335       ))
(let (($e337 (concat $e7        $e336 )))
(let (($e338 (select $e289 $e337)))
(let (($e342 (   extract      $e338)))
(let (($e1203        v12        ))
(let (($e2470             $e342          ))
(let (($e2471            $e2470 ))
(let (($e2472 (ite        $e2471  $e107 $e106)))
(let (($e2473 (concat $e28 $e2472)))
                   (=        $e1203  $e2473)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     ))))                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  )                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            )   )))))              )) )                          )                                                                                                                                                                                     )))))) ) )))))                                              )    )       )       )      )
