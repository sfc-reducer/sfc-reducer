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
short
c
;
short
*
d
=
&
c
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
d
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
