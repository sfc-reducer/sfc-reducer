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
e
;
short
*
f
=
&
e
;
char
h
(
)
{
char
*
a
;
char
*
*
b
=
&
a
;
char
c
=
0xF
;
char
*
*
d
=
&
a
;
*
f
=
b
==
d
|
c
;
return
c
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
c
(
a
,
e
)
;
return
0
;
}
