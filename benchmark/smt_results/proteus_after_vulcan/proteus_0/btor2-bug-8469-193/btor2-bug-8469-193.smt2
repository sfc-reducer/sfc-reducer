(declare-fun bvlambda_52_ ()Bool         )
(declare-fun a112 () (Array (_ BitVec 1) (_ BitVec 9)))
(assert
(let (($e22 (_ bv0 8)))
(let (($e124 (concat $e22 false       )))
(let (($e125 (store a112 bvlambda_52_ $e124)))
(let (($e126 (select $e125 true )))
(let (($e779      (=     $e126 $e124)         ))
(let (($e840 (store a112 false $e126)))
(let (($e841 (select $e840 $e779       )))
(let (($e843 (concat        $e841 $e124)))
(let (($e854 ((_ extract 10 3) $e843)))
                  (= $e22 $e854)
                                                                                                                                                                                                                                                                                                                                                                                           )          ) ))                                                            )                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            )))                              )                     )
