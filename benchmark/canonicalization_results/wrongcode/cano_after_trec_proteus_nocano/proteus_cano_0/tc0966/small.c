int
printf
(
const
char
*
,
...
)
;
char
a
;
void
c
(
__m128
,
a
)
{
printf
(
"%x"
,
a
)
;
}
char
*
e
;
long
long
f
;
char
g
(
)
{
long
long
*
a
=
&
f
;
char
*
*
b
=
&
e
;
char
*
*
c
=
&
e
;
*
a
=
-
(
c
==
b
)
;
return
*
a
;
}
char
main
(
)
{
g
(
)
;
c
(
a
,
f
)
;
return
0
;
}
