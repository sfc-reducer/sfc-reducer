(declare-fun bvlambda_3_ () (_ BitVec 1))
(declare-fun a50 () (Array (_ BitVec 1) (_ BitVec 5)))
(assert
(let (($e15 (_ bv8 5)))
(let (($e28 (_ bv0 3)))
(let (($e56 (select a50        bvlambda_3_)))
(let (($e58 (store a50 true        $e56)))
(let (($e59 (store $e58 bvlambda_3_        $e15 )))
(let (($e71 (   extract      $e56)))
(let (($e72 (concat $e28 $e71)))
(let (($e73 (select $e59 true       )))
(let (($e74 ((_ extract 3 0) $e73)))
                 (bvult $e74 $e72)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                           ))))           )) )                      )            )              )
