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
b
(
char
b
,
void
*
c
,
char
__m128
)
{
a
=
b
;
}
void
c
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
short
d
[
10
]
=
{
1
}
;
int
main
(
)
{
b
(
__alignof__
(
d
)
,
""
,
a
)
;
c
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
