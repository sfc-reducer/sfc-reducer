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
*
*
c
;
char
b
;
unsigned
short
d
(
short
)
;
unsigned
e
(
char
,
unsigned
,
unsigned
char
,
short
,
int
)
;
char
f
(
)
{
char
a
=
1
;
d
(
a
)
;
return
a
;
}
unsigned
short
d
(
short
a
)
{
char
*
c
=
&
b
;
e
(
a
,
a
,
*
c
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
unsigned
e
(
char
a
,
unsigned
__m128
,
unsigned
char
__m128d
,
short
__m128i
,
int
g
)
{
int
*
*
*
h
[
]
[
1
]
=
{
&
c
,
&
c
,
&
c
}
;
b
=
h
[
0
]
[
1
]
==
h
[
1
]
[
1
]
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
f
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
