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
char
a
;
void
b
(
char
b
,
void
*
c
,
char
__m128
)
{
a
=
b
;
}
void
c
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
int
d
[
]
[
1
]
;
int
*
e
=
*
d
;
unsigned
char
*
f
;
char
g
(
)
{
unsigned
char
*
*
a
[
]
[
1
]
=
{
&
f
,
&
f
,
&
f
}
;
char
b
=
1
;
unsigned
char
*
*
c
=
&
f
;
*
e
=
a
[
1
]
[
1
]
==
c
;
return
b
;
}
int
main
(
)
{
g
(
)
;
b
(
d
[
a
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
