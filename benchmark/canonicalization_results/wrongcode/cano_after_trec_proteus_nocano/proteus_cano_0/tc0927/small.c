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
c
[
]
[
1
]
=
{
1
}
;
char
main
(
)
{
char
a
;
for
(
a
=
1
;
a
<
8
;
a
++
)
++
c
[
a
]
[
a
]
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
