(declare-const i2  Int)
(declare-const bv_14-0  (_ BitVec 14))
(assert (or (or false                   (= i2 21)) (= ((_ int2bv 14) i2) bv_14-0 (bvurem bv_14-0 ((_ int2bv 14) i2))                      )))
(check-sat)
