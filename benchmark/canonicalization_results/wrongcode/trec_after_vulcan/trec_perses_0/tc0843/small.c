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
d
,
int
b
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
a
,
b
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
c
;
for
(
c
=
1
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
1
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
