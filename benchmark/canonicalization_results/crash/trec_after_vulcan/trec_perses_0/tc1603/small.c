char
a
[
]
;
int
b
(
)
{
int
*
*
*
b
;
const
int
*
*
c
;
const
int
*
*
*
d
[
]
[
5
]
=
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
{
0
}
,
0
,
0
,
0
,
&
b
,
&
c
}
;
if
(
b
==
d
[
5
]
[
4
]
)
*
b
=
a
;
return
*
a
;
}
