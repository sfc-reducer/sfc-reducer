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
void
a
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
int
c
;
int
*
d
=
&
c
;
char
*
e
;
int
*
*
f
=
&
d
;
char
g
(
unsigned
short
,
int
*
,
int
*
,
int
*
)
;
char
b
(
)
{
return
g
(
c
,
d
,
d
,
d
)
;
}
char
g
(
unsigned
short
a
,
int
*
b
,
int
*
c
,
int
*
d
)
{
char
*
*
g
[
]
[
9
]
[
7
]
=
{
{
{
0
}
,
&
e
,
&
e
}
,
{
{
0
}
,
{
0
}
,
{
0
}
,
{
0
}
,
&
e
,
&
e
}
}
;
char
e
=
0x4
;
*
*
f
=
g
[
1
]
[
4
]
[
1
]
==
g
[
0
]
[
1
]
[
1
]
|
e
;
return
a
;
}
char
main
(
)
{
b
(
)
;
a
(
c
,
c
)
;
return
0
;
}
