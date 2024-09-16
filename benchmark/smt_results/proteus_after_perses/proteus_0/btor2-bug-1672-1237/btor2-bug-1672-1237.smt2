(declare-fun a31 () (Array (_ BitVec 1) (_ BitVec 3)))
(assert
(let (($e6 (_ bv4 3)))
(let (($e56 (select a31 false)))
(let (($e57 (   extract      $e56)))
(let (($e58 (store a31 true        $e6)))
(let (($e59 (store $e58 $e57 $e56)))
(
                extract(select $e59 true)
                                                                                                                              )))))                                        )     )
