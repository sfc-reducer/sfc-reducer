(declare-fun a86 () (Array (_ BitVec 15) (_ BitVec 14)))
(declare-fun a88 () (Array (_ BitVec 1) (_ BitVec 16)))
(assert
(let (($e4 (_ bv0 2)))
(let (($e24 (_ bv0     15)))
(let (($e91 (select a86        $e24 )))
(let (($e92 (concat $e4 $e91)))
(let (($e93 (select a88 true       )))
(let (($e94 (   extract      $e91)))
(let (($e95 (store a88 false      $e93 )))
(let (($e96 (store $e95 $e94 $e92)))
(
                extract(select $e96 true)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              )))))))                                                           )                   )   )
