(declare-fun a () Int)
(assert (= 0 (bv2nat ((_ int2bv 1) a))))
(assert (distinct (_ bv0 1) ((_ extract 0 0) (bvsdiv ((_ int2bv 3) 1) ((_ int2bv 3) (bv2nat ((_ int2bv 3) a)))))))
(check-sat)
