(declare-fun bvlambda_1_ () (_ BitVec 1))
(declare-fun bvlambda_2_ () (_ BitVec 10))
(declare-fun a49 () (Array (_ BitVec 1) (_ BitVec 12)))
(assert
(let (($e24 (_ bv2700 12)))
(let (($e29 (_ bv3946 14)))
(let (($e95 (concat bvlambda_1_ bvlambda_1_)))
(let (($e96 (concat $e95 bvlambda_2_)))
(let (($e97 (store a49 true        $e96)))
(let (($e98 (store $e97 bvlambda_1_ $e24)))
(let (($e99 (select $e98 true       )))
(let (($e100 (concat $e95 $e99)))
                  (bvult $e100 $e29)
                                                                                                                                                                                                                                                                                                                    ))))))                                                      )    )                       )
