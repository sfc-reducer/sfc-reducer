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
a
,
__m128
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
long
long
*
*
d
;
static
long
long
*
*
*
e
=
&
d
;
char
h
(
)
{
long
long
*
*
*
b
=
&
d
;
c
(
-
(
e
==
b
)
,
a
)
;
return
a
;
}
char
main
(
)
{
h
(
)
;
return
0
;
}
