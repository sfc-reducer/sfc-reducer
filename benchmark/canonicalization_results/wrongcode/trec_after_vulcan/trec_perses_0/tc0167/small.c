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
void
a
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
b
;
int
*
*
e
=
&
d
;
char
f
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
int
g
(
)
{
f
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
return
c
;
}
char
f
(
unsigned
short
a
,
int
*
d
,
int
*
f
,
int
*
g
)
{
char
*
*
h
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
b
,
&
b
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
b
,
&
b
}
}
;
int
b
=
0x4
;
*
*
e
=
h
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
h
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
b
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
b
=
g
(
)
;
a
(
b
,
b
)
;
return
0
;
}
