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
c
,
void
*
b
,
char
__m128
)
{
a
+=
c
;
}
void
d
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
;
char
e
[
]
;
int
main
(
)
{
for
(
;
c
<
6
;
c
++
)
b
(
e
[
c
]
,
""
,
a
)
;
d
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
