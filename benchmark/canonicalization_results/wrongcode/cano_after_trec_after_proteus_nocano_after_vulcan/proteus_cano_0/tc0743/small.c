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
struct
{
char
b
;
}
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
3
;
a
++
)
++
c
[
a
]
.
b
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
