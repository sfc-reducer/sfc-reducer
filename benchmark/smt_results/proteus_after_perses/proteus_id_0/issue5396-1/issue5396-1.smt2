(declare-fun a () Int)
(assert (= (bv2nat       ((_ int2bv 3) a)                  ) 0))
(assert (distinct ((_ extract 0 0) (bvsdiv ((_ int2bv 3) (bv2nat (bvmul ((_ int2bv 3) a) ((_ int2bv 3) a)))) ((_ int2bv 3) 1))) (_ bv0 1)))
(check-sat)
