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
[
1
]
;
char
main
(
)
{
char
d
;
for
(
d
=
1
;
d
<
4
;
d
++
)
++
c
[
d
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
