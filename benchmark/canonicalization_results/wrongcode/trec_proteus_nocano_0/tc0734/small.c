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
unsigned
b
,
char
*
c
,
int
d
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
d
[
]
;
short
e
(
int
,
unsigned
,
unsigned
)
;
unsigned
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
a
;
}
short
e
(
int
a
,
unsigned
b
,
unsigned
c
)
{
short
e
;
unsigned
short
*
f
[
]
[
1
]
=
{
&
e
}
;
unsigned
short
*
*
g
=
&
f
[
2
]
[
1
]
;
*
d
=
(
*
g
=
&
e
)
!=
&
e
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
f
(
)
;
b
(
*
d
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
