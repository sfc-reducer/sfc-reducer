(set-logic BV)
(assert (forall ((c (_ BitVec 32))) (exists ((e (_ BitVec 32))) (exists ((f (_ BitVec 32))) (= (bvand e f) c (_ bv0 32))))))
(check-sat)
