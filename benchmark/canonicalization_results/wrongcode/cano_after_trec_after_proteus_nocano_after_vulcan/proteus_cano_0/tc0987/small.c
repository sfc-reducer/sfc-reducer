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
char
c
[
]
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
6
;
a
++
)
++
c
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
