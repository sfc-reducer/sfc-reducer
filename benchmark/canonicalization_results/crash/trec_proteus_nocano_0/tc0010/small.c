short
a
(
)
{
const
int
*
*
a
;
const
int
*
*
*
b
=
&
a
;
int
*
*
*
*
c
=
a
;
if
(
*
c
==
b
)
++
*
*
c
;
return
!
a
;
}
