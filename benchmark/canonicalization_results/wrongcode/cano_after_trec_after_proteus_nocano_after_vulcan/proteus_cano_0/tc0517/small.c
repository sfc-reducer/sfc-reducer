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
b
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
char
d
(
)
{
const
unsigned
char
c
=
255
;
b
=
b
<
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
d
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
