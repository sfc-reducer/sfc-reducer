(declare-fun a15 () (Array (_ BitVec 11) (_ BitVec 3)))
(declare-fun a17 () (Array (_ BitVec 1) (_ BitVec 10)))
(assert
(let (($e1 (_ bv0 1)))
(let (($e5 (_ bv0 10)))
(let (($e7 (_ bv2 11)))
(let (($e9 (_ bv0 7)))
(let (($e25        a15           ))
(let (($e26 (select $e25 $e7)))
(let (($e28 (concat        $e9  $e26)))
(let (($e30                   $e28      ))
(let (($e31 (select a17 $e1)))
(let (($e32 (   extract      $e31)))
(let (($e35        a17                  ))
(let (($e36 (store $e35 (bvnot $e1) (bvnot $e5))))
(let (($e37 (store $e36 $e32 $e30)))
(let (($e38 (select $e37 (bvnot $e1))))
                 (= $e5 $e38)
                                         ))))  ))) ) ))       ) ) )   ))
