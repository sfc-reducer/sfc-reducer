(declare-fun bvlambda_7_ () (_ BitVec 4))
(declare-fun a50 () (Array (_ BitVec 1) (_ BitVec 4)))
(assert
(let (($e5 (_ bv14 4)))
(let (($e194 (   extract      bvlambda_7_)))
(let (($e195 (store a50  (not false) $e5)))
(let (($e196 (store $e195 $e194 bvlambda_7_)))
(let (($e197 (select $e196 true       )))
                  (= bvlambda_7_ $e197)
                                                                                                                                                                                                           ))))                                                                                                                                                                          )    )
