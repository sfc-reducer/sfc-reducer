(declare-const a  Int)
(assert (distinct                      a                     0))
(assert (distinct ((_ extract 0 0)         ((_ int2bv 3) (bv2nat (bvsdiv((_ int2bv 3) a) ((_ int2bv 3) a))))                  ) (_ bv0 1)))
(check-sat)
