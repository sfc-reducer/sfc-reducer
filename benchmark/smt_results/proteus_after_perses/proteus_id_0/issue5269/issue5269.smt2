(declare-sort UInt 0)
(declare-fun |this/Time | () (Set (Tuple UInt)))
(declare-fun |this/BankAccount | () (Set (Tuple Tuple)))
(declare-fun |this/BankAccount/deposit | () (Set (Tuple Tuple UInt UInt)))
(assert
 (subset |this/BankAccount/deposit |
   (product |this/BankAccount |
     (product |this/Time |
       |this/Time |
      )))
                                                                       )
(assert
       (not
         (=
           (join |this/BankAccount |
             |this/BankAccount/deposit |
            )
           (as emptyset (Set (Tuple UInt UInt)))))
                                                                                                                                                                )
(check-sat)
