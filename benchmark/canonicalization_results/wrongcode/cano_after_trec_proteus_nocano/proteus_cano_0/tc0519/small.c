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
short
d
;
short
*
e
=
&
d
;
int
*
*
f
;
char
g
(
)
{
int
*
*
*
a
=
&
f
;
*
e
=
-
(
a
==
&
f
)
;
return
d
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
d
)
;
return
0
;
}
