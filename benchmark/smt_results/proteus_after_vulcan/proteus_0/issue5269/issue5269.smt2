(declare-sort UInt 0)
(declare-const|this/Time |   (Set (Tuple UInt)))
(declare-const|this/BankAccount |   (Set (Tuple Tuple)))
(declare-const|this/BankAccount/deposit |   (Set (Tuple Tuple UInt UInt)))
(assert
 (subset |this/BankAccount/deposit |
   (product |this/BankAccount |
     (product |this/Time |
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
