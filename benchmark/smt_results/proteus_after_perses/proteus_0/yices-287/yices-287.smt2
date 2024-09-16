(set-logic QF_ABV)
(declare-const|z$_s7_af.gen_fifos[0].f.ff_rdPtr.Q$4$[2:0]_bv|   (_ BitVec 3))
(declare-const z$n1sbv3_bv  (_ BitVec 3))
(declare-const z$n128sbv8_bv  (_ BitVec 8))
(declare-const z$l$78_bv  (Array (_ BitVec 3) (_ BitVec 8)))
(declare-const z$l$99_bv  (Array (_ BitVec 3) (_ BitVec 8)))
(declare-const z$5789_bv  (Array (_ BitVec 3) (_ BitVec 8)))
(declare-const z$5796_bv  (_ BitVec 8))
(assert
 (= z$5789_bv     (store z$5789_bv  |z$_s7_af.gen_fifos[0].f.ff_rdPtr.Q$4$[2:0]_bv| z$n128sbv8_bv)))
(assert
 (= z$5789_bv     (store z$5789_bv  z$n1sbv3_bv z$5796_bv )))
(assert
                   (distinct z$l$99_bv                            z$l$78_bv )       )
(assert
 (= z$n128sbv8_bv (_ bv128 8)))
(assert
 (let ((?x2888 (store z$l$78_bv |z$_s7_af.gen_fifos[0].f.ff_rdPtr.Q$4$[2:0]_bv| z$n128sbv8_bv)))
 (= z$5789_bv ?x2888)))
(check-sat)
(get-model)
