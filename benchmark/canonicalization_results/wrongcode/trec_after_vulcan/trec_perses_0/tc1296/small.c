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
c
[
]
;
short
e
(
int
,
char
,
unsigned
short
)
;
int
f
(
)
{
e
(
a
,
a
,
a
)
;
return
*
c
;
}
short
e
(
int
a
,
char
b
,
unsigned
short
d
)
{
*
c
=
1
;
return
a
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
e
=
f
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
5
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
