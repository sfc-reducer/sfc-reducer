(declare-fun bvlambda_6_ () (_ BitVec 2))
(declare-fun bvlambda_24_ ()Bool         )
(declare-fun a74 () (Array (_ BitVec 1) (_ BitVec 4)))
(assert
(let (($e6 (_ bv1920 16)))
(let (($e17 (_ bv1920 11)))
(let (($e75 (concat $e17 false       )))
(let (($e76 (concat $e75 false       )))
(let (($e77 (concat $e76 false       )))
(let (($e78 (concat $e77 bvlambda_24_)))
(let (($e79 (concat $e78 false       )))
(let (($e86 (bvand (bvnot $e6) $e79)))
(let (($e87 (bvand $e6 (bvnot $e79))))
(let (($e88 (bvand (bvnot $e87) (bvnot $e86))))
(let (($e696 (   extract      $e88)))
(let (($e698 (concat bvlambda_6_ bvlambda_6_)))
(let (($e699 (store a74 false $e698)))
(
                 extract(select $e699(not   $e696))
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ))) )                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               )))      )))))                                 )          )     )
