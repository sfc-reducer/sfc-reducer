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
int
a
(
b
)
{
return
-
b
;
}
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
b
=
&
e
;
short
*
*
f
=
&
b
;
short
*
*
*
g
=
&
f
;
short
*
*
*
*
h
=
&
g
;
char
d
(
)
{
const
long
long
*
*
*
*
*
*
c
;
const
long
long
*
*
*
*
*
*
*
d
=
&
c
;
*
*
*
*
h
=
a
(
d
==
&
c
)
;
return
*
b
;
}
char
main
(
)
{
d
(
)
;
c
(
e
,
e
)
;
return
0
;
}
