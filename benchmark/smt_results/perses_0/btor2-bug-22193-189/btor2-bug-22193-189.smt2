(declare-fun v5 () (_ BitVec 1))
(declare-fun a75 () (Array (_ BitVec 1) (_ BitVec 2)))
(assert
(let (($e1 (_ bv0 1)))
(let (($e14 (_ bv96 16)))
(let (($e26 (_ bv2 2)))
(let (($e132              v5 ))
(let (($e133            $e132 ))
(let (($e178         $e14       ))
(let (($e212 ((_ extract 6 5) $e178)))
(let (($e213                  $e133 ))
(let (($e214        $e26             ))
(let (($e215 (store a75 (bvnot $e1) $e214)))
(let (($e216 (store $e215 $e213 $e212)))
(let (($e217 (select $e216 (bvnot $e1))))
             (   extract      $e217)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 ))))))                                 )                                            ))                                                                                         )           )            ))
