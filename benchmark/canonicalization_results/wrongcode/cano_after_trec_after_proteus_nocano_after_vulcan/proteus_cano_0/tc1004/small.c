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
void
a
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
int
*
b
;
int
*
*
c
=
&
b
;
char
d
(
)
{
int
b
=
0x7FC3
;
*
c
=
&
b
;
b
<<=
*
*
c
;
return
b
;
}
char
main
(
)
{
char
b
=
d
(
)
;
a
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
