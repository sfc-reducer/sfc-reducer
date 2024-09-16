(declare-sort Atom 0)
(declare-sort UInt 0)
(declare-const univInt  (Set (Tuple UInt)))
(declare-const|this/Time |   (Set (Tuple UInt)))
(declare-const|this/BankAccount |   (Set (Tuple Atom)))
(declare-const|this/BankAccount/deposit |   (Set (Tuple Atom UInt UInt)))
(assert
 (subset |this/BankAccount/deposit |
   (product |this/BankAccount |
     (product univInt
       |this/Time |
      )))
                                                                       )
(assert
       (not
         (subset
           (join |this/BankAccount |
             |this/BankAccount/deposit |
            )
           (as emptyset (Set (Tuple UInt UInt)))))
                                                                                                                                                                )
(check-sat)
