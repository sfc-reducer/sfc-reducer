(declare-fun v0 () (_ BitVec 7))
(declare-fun a56 () (Array (_ BitVec 1) (_ BitVec 2)))
(assert
(let (($e3 (_ bv2 2)))
(let (($e5 (_ bv6542 13)))
(let (($e8 (_ bv0 6)))
(let (($e30 (_ bv0 11)))
(let (($e143 (store a56 false $e3)))
(let (($e150 (concat $e8 v0)))
(let (($e151 (bvand (bvnot $e5) $e150)))
(let (($e152 (bvand $e5 (bvnot $e150))))
(let (($e153 (bvand (bvnot $e152) (bvnot $e151))))
(let (($e214 (   extract        $e153)))
(let (($e216 (select $e143 (not   $e214))))
(let (($e217 (concat $e30 $e216)))
                  (= $e151 $e217)
                                                                                                                                   )) )                                                            ))))      )                                                                                                 )                     )  ) )  )
