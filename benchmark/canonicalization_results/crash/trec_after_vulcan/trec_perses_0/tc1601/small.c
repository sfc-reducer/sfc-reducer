_Complex
a
;
int
*
b
;
volatile
int
*
*
*
c
;
char
d
(
)
{
int
*
*
d
=
&
b
;
if
(
d
==
*
c
)
*
*
c
=
0
;
return
a
;
}
