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
d
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
e
[
]
[
1
]
;
char
c
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
a
]
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
