void
*
a
(
const
int
*
a
)
{
int
*
*
b
=
a
;
if
(
b
==
&
a
)
++
*
b
;
return
a
;
}
