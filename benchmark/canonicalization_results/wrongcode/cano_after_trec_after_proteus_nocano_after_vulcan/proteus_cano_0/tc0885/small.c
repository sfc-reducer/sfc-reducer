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
int
c
[
]
[
1
]
[
1
]
;
unsigned
d
(
int
*
,
unsigned
)
;
char
e
(
)
{
int
*
b
=
c
[
1
]
[
1
]
;
d
(
b
,
3
)
;
return
*
b
;
}
unsigned
d
(
int
*
b
,
unsigned
d
)
{
unsigned
char
*
*
*
c
[
1
]
;
unsigned
char
*
*
*
*
e
[
]
=
{
c
}
;
int
*
f
=
&
a
;
*
f
=
d
*=
*
e
==
c
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
e
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
