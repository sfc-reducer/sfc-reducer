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
;
void
b
(
__m128
,
__m128d
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
c
;
static
long
long
*
*
d
=
&
c
;
char
e
(
)
{
int
*
b
=
&
a
;
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
*
b
=
-
(
*
e
==
&
c
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
e
(
)
;
b
(
a
,
a
)
;
return
0
;
}
