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
+=
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
char
d
[
]
;
char
e
;
char
main
(
)
{
for
(
;
e
<
9
;
e
++
)
b
(
d
[
e
]
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
