(declare-fun a17 () (Array (_ BitVec 1) (_ BitVec 10)))
(assert
(let (($e5 (_ bv0 10)))
(let (($e31 (select a17 false)))
(let (($e32 (   extract      $e31)))
(let (($e36 (store a17 true         (bvnot $e5))))
(let (($e38 (select $e36 (not   $e32))))
                 (= $e5 $e38)
                                         ) )   ))                 )    )
