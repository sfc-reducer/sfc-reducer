(declare-fun bvlambda_34_ ()Bool         )
(declare-fun a110 () (Array (_ BitVec 1) (_ BitVec 11)))
(declare-fun a111 () (Array (_ BitVec 15) (_ BitVec 5)))
(assert
(let (($e17 (_ bv0 6)))
(let (($e36 (_ bv32668 15)))
(let (($e112 (select a110 true       )))
(let (($e114 (   extract        $e112)))
(let (($e141 (select a111         $e36 )))
(let (($e142 (concat $e17 $e141)))
(let (($e154             $e114              ))
(let (($e155                  $e154 ))
(let (($e234 (store a110 $e114 $e112)))
(let (($e256 (concat $e141       bvlambda_34_)))
(let (($e257 (concat bvlambda_34_ $e141       )))
(let (($e259      (bvult $e256 $e257)         ))
(let (($e278 (store $e234 bvlambda_34_ $e142)))
(let (($e279 (select $e278 $e154      )))
(let (($e280 (   extract        $e279)))
(let (($e286               $e280        ))
(let (($e288        $e286               ))
             (bvand (bvnot $e288)        $e155 )
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    ) )     )))                  ) ))                     )                                                                              ))           ))                          ) )                )                  )                )
