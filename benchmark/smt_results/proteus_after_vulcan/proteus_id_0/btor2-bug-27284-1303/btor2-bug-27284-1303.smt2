(declare-fun bvlambda_3_ () (_ BitVec 1))
(declare-fun bvlambda_21_ () (_ BitVec 6))
(declare-fun bvlambda_37_ () (_ BitVec 5))
(declare-fun a72 () (Array (_ BitVec 1) (_ BitVec 6)))
(assert
(let (($e80 (concat true         bvlambda_37_)))
(let (($e86 (store a72 true         bvlambda_21_)))
(let (($e87 (store $e86 bvlambda_3_ $e80)))
(let (($e249 (select $e87  (not false ))))
                  (= $e80 $e249)
                                                                                                                                                                                                                                                                                                         )                                                                                                                                                                 ))     )                                  )
