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
c
;
void
f
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
char
b
[
]
[
1
]
;
char
g
(
)
{
char
a
=
1
;
b
[
1
]
[
0
]
=
a
;
return
1
;
}
char
main
(
)
{
char
a
=
g
(
)
;
f
(
c
,
a
)
;
return
0
;
}
