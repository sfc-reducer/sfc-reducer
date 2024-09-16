(declare-sort Atom 0)
(declare-sort UInt 0)
(declare-fun univInt () (Set (Tuple UInt)))
(declare-fun |this/Time | () (Set (Tuple UInt)))
(declare-fun |this/BankAccount | () (Set (Tuple Atom)))
(declare-fun |this/BankAccount/deposit | () (Set (Tuple Atom UInt UInt)))
(assert
 (subset |this/BankAccount/deposit |
   (product |this/BankAccount |
     (product univInt
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
