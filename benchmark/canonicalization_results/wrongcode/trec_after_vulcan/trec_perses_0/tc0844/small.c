signed
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
unsigned
c
,
char
*
b
,
int
d
)
{
a
+=
c
;
}
void
c
(
b
,
a
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
int
d
[
]
=
{
1
}
;
int
main
(
)
{
for
(
;
a
<
10
;
a
++
)
b
(
d
[
a
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
