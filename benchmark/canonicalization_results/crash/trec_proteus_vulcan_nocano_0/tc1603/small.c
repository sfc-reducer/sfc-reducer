unsigned
*
a
;
unsigned
b
(
)
{
int
*
*
*
c
=
a
;
const
int
*
*
b
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
a
,
&
b
}
;
if
(
c
==
d
[
5
]
[
4
]
)
++
*
c
;
return
*
a
;
}
