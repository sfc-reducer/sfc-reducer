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
[
]
;
char
e
(
)
{
return
++
*
c
;
}
int
main
(
)
{
int
a
;
int
f
=
e
(
)
;
for
(
a
=
0
;
a
<
8
;
a
++
)
b
(
c
[
a
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
