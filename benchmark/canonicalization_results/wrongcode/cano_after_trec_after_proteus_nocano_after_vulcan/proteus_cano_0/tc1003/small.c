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
=
{
1
}
;
char
d
=
1
;
int
e
=
1
;
char
f
=
1
;
int
g
=
1
;
char
h
=
1
;
int
i
=
1
;
void
*
j
=
c
;
int
k
[
2
]
[
7
]
=
{
1
}
;
unsigned
l
(
)
{
char
a
=
0x22
;
++
c
[
a
]
;
return
*
c
;
}
int
main
(
)
{
l
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
