(declare-const str1  String)
(declare-const str18  String)
(assert (str.in_re (str.replace str18 str1 str18) (str.to_re "pANjvthXNyBbIgIlkC")))
(check-sat)
