(declare-fun bvlambda_1_ () (_ BitVec 1))
(declare-fun bvlambda_2_ () (_ BitVec 10))
(declare-fun bvlambda_8_ () (_ BitVec 7))
(declare-fun a49 () (Array (_ BitVec 1) (_ BitVec 12)))
(assert
(let (($e1 (_ bv0 1)))
(let (($e4 (_ bv0 2)))
(let (($e24 (_ bv2700 12)))
(let (($e29 (_ bv3946 14)))
(let (($e51              bvlambda_8_ ))
(let (($e52        $e51                                   ))
(let (($e93 (   extract      $e52)))
(let (($e94             $e93 ))
(let (($e95 (concat $e1 bvlambda_1_)))
(let (($e96 (concat $e95 bvlambda_2_)))
(let (($e97 (store a49 (bvnot $e1) $e96)))
(let (($e98 (store $e97 $e94 $e24)))
(let (($e99 (select $e98 (bvnot $e1))))
(let (($e100 (concat $e4 $e99)))
                  (bvult $e100 $e29)
                                                                                                                                                                                                                                                                                                                    ))))))))                                        ))          )    )                   )  ))
