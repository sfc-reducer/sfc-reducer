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
char
c
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
char
a
=
100
;
*
b
=
a
<<=
a
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
c
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
