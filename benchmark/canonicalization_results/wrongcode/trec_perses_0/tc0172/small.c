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
c
;
void
d
(
int
a
,
int
b
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
e
[
]
;
unsigned
g
(
int
,
unsigned
,
unsigned
short
,
short
,
short
)
;
char
f
(
)
{
unsigned
a
=
1
;
int
*
b
=
&
a
;
g
(
a
,
1
,
1
,
a
,
a
)
;
return
*
b
;
}
unsigned
g
(
int
c
,
unsigned
a
,
unsigned
short
b
,
short
g
,
short
f
)
{
short
d
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
e
[
a
]
=
d
[
0
]
[
0
]
[
0
]
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
a
=
1
;
f
(
)
;
d
(
c
,
a
)
;
return
0
;
}
