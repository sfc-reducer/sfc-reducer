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
__m128
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
*
b
;
char
c
;
unsigned
char
d
(
unsigned
short
)
;
char
e
(
)
{
return
d
(
1
)
;
}
unsigned
char
d
(
unsigned
short
__m128
)
{
int
*
*
a
[
]
[
5
]
[
1
]
=
{
{
&
b
}
,
{
&
b
,
&
b
,
&
b
}
}
;
c
=
a
[
1
]
[
1
]
[
1
]
==
0
;
return
c
;
}
char
main
(
)
{
e
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
