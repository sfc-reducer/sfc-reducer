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
static
int
a
(
__m128
,
b
)
{
return
-
b
;
}
int
b
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
short
*
d
;
char
f
(
)
{
short
*
*
c
=
&
d
;
short
*
*
f
=
&
d
;
short
*
*
*
d
=
&
f
;
int
*
g
=
&
b
;
*
g
=
a
(
b
,
c
==
*
d
)
;
return
*
g
;
}
char
main
(
)
{
f
(
)
;
c
(
b
,
b
)
;
return
0
;
}
