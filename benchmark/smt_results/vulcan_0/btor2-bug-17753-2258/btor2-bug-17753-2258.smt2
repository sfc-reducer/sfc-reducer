(declare-fun a79 () (Array (_ BitVec 1) (_ BitVec 16)))
(assert
(let (($e24 (_ bv0  16)))
(let (($e44 (_ bv0 15)))
(let (($e111 (select a79 true         )))
(let (($e112 ((_ extract 14 0) $e111)))
(let (($e113      (= $e44 $e112)         ))
(let (($e172 (store a79 false      $e111)))
(let (($e173 (store $e172 $e113        $e24 )))
(let (($e485 (select $e173 (not false))))
             (   extract        $e485)
                                                                                                                                                                                                                                                                                                                                                )                                                                                                                                                                                                                                                                                                                       ))                                                          )))                                                            )                   )                       )
