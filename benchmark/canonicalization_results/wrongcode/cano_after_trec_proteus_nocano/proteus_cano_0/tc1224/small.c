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
char
e
(
)
{
int
*
a
;
int
*
*
b
=
&
a
;
short
*
c
=
&
d
;
b
++
;
*
c
=
*
*
b
;
return
sizeof
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
