(declare-fun v1 () (_ BitVec 16))
(declare-fun v2 () (_ BitVec 16))
(declare-fun v4 () (_ BitVec 6))
(declare-fun a68 () (Array (_ BitVec 4) (_ BitVec 4)))
(assert
(let (($e5 (_ bv982 13)))
(let (($e12 (_ bv272 9)))
(let (($e13 false    ))
(let (($e28 (_ bv3 2)))
(let (($e38 (_ bv1023 10)))
(let (($e46 (_ bv32767 15)))
(let (($e121        a68             ))
(let (($e158                    $e13     ))
(let (($e159 (concat $e158 $e5)))
(let (($e160        $e159       ))
(let (($e193        $e121             ))
(let (($e237                    $e28      ))
(let (($e238 (concat $e237 $e160)))
(let (($e239 (bvand        v1         $e238 )))
(let (($e300                    $e38      ))
(let (($e301 (concat $e300 v4)))
(let (($e302      (= $e301 v2)         ))
(let (($e303             $e302 ))
(let (($e304             $e303           ))
(let (($e427        $e193             ))
(let (($e473                    $e46      ))
(let (($e474 (concat $e473 $e304)))
(let (($e475 (bvand $e474 $e239)))
(let (($e522 ((_ extract 5 2) $e12)))
(let (($e523               $e522 ))
(let (($e524 (select $e427 $e523)))
(let (($e1981 (   extract      $e524)))
(let (($e1982              $e1981          ))
(let (($e1983             $e1982 ))
              (ite        $e1983  $e239 $e475)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       )))                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                )))                                              )))                                             )                                                                                                                          )))))                                                            )))                                           )                                )))                                    )                                                               )       )         )              ))      )    )
