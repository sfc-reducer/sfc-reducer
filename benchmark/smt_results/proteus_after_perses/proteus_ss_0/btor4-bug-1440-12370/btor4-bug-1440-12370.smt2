(declare-fun v1 () (_ BitVec 11))
(declare-fun a76 () (Array (_ BitVec 14) (_ BitVec 3)))
(declare-fun a77 () (Array (_ BitVec 5) (_ BitVec 11)))
(assert
(let (($e6 (_ bv62 7)))
(let (($e9 (_ bv1 2)))
(let (($e21 (_ bv0 5)))
(let (($e26 (_ bv0 7)))
(let (($e30 (_ bv0 8)))
(let (($e154        a76             ))
(let (($e163        a77             ))
(let (($e284 (concat $e21 $e9)))
(let (($e285               $e284               ))
(let (($e286 ((_ extract 6 2)        $e285 )))
(let (($e287 (select $e163 $e286)))
(let (($e685                  v1 ))
(let (($e686               $e685 ))
(let (($e841 (concat $e26 $e6)))
(let (($e842 (select $e154 $e841)))
(let (($e1170 (concat $e30 $e842)))
(let (($e1171 (bvand        v1         $e287 )))
(let (($e1172 (bvand $e1171 $e1170)))
(let (($e1173 (   extract      $e686)))
(let (($e1174              $e1173          ))
(let (($e1175             $e1174 ))
              (ite        $e1175  $e1171 $e1172)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ))))))                                                                                                                                                                                                                                                                                                                                       ))                                                                                                                                                          ))                                                                                                                                                                                                                                                                                                                                                                                                             ))))                                                                                                                        )        )                                                                                                      )   )    )           )  )     )
