(declare-fun bvlambda_2_ () (_ BitVec 6))
(declare-fun a108 () (Array (_ BitVec 1) (_ BitVec 4)))
(assert
(let (($e1 (_ bv0 1)))
(let (($e26 (_ bv0 9)))
(let (($e28 (_ bv4  13)))
(let (($e35 (_ bv4 4)))
(let (($e155 (store a108 false $e35)))
(let (($e287 (concat        bvlambda_2_ $e1        )))
(let (($e288 (concat $e287 bvlambda_2_)))
(let (($e291      (bvult $e28 $e288)         ))
(let (($e292 (select $e155 (bvnot $e291))))
(let (($e335 (concat bvlambda_2_ $e292)))
(let (($e391 (concat (bvnot $e26) $e291)))
(let (($e393      (bvult        $e335  $e391)         ))
                    (bvnot $e393)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  ) )                                                       )                                          ))  ))                                                                                                                                   )                                                                            )      ) )                        ))
