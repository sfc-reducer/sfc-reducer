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
d
(
b
,
c
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
e
[
]
[
1
]
[
1
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
int
printf
,
c
,
a
;
for
(
c
=
0
;
c
<
6
;
c
++
)
for
(
a
=
0
;
a
<
2
;
a
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
