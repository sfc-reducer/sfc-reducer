(declare-fun v4 () (_ BitVec 2))
(declare-fun v9 () (_ BitVec 12))
(declare-fun v10 () (_ BitVec 8))
(declare-fun v21 () (_ BitVec 7))
(assert
(let (($e7 (_ bv15 4)))
(let (($e10 (_ bv0 5)))
(let (($e179                    $e7     ))
(let (($e180 (concat $e179 v10)))
(let (($e181           $e180 ))
(let (($e182               v9                ))
(let (($e183 (bvand        $e182         $e181 )))
(let (($e316 (   extract      v4)))
(let (($e858 (concat $e10 v21)))
(let (($e859 (bvand $e858 $e183)))
(let (($e1496             $e316          ))
(let (($e1497            $e1496 ))
              (ite        $e1497  $e183 $e859)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ))                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            ))                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             )                                                                                                                                    )))))                                                                                                                                                 )  )      )
