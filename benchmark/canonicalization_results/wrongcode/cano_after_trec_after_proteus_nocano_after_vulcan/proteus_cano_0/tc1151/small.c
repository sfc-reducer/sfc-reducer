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
__m128
,
__m128d
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
union
a
{
char
__m128
;
}
;
char
d
[
]
[
4
]
=
{
{
1
}
,
{
1
}
,
{
1
}
,
1
}
;
union
a
e
(
unsigned
*
)
;
char
c
(
)
{
int
*
b
=
&
a
;
e
(
&
a
)
;
return
*
b
;
}
union
a
e
(
unsigned
*
a
)
{
union
a
b
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
*
a
=
__alignof__
(
d
)
;
return
b
[
1
]
[
1
]
[
1
]
;
}
char
main
(
)
{
c
(
)
;
b
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
