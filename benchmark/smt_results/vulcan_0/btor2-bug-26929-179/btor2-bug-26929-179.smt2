(declare-fun bvlambda_4_ () (_ BitVec 1))
(declare-fun a48 () (Array (_ BitVec 1) (_ BitVec 4)))
(assert
(let (($e15 (_ bv0 4)))
(let (($e35 (_ bv14 7)))
(let (($e76 (store a48 (not false) (bvnot $e15))))
(let (($e78 (select $e76 (not   bvlambda_4_))))
(let (($e79 (concat $e78 $e78)))
(let (($e86 ((_ extract 6 0) $e79)))
                 (bvult $e86        $e35 )
                                                                                                                                                               )      )) )                         )                   )              )
