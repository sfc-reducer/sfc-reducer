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
static
int
c
=
0x8
;
char
d
(
)
{
int
*
b
=
&
c
;
int
*
d
=
&
a
;
*
d
=
b
==
&
c
|
*
b
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
