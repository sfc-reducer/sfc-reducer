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
int
a
;
void
b
(
b
,
c
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
c
[
]
=
{
&
a
}
;
unsigned
char
*
d
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
char
*
*
e
=
d
[
1
]
[
1
]
;
const
int
f
(
short
,
char
)
;
int
g
(
)
{
char
a
=
3
;
f
(
a
,
a
)
;
return
a
;
}
const
int
f
(
short
b
,
char
f
)
{
char
*
a
=
&
f
;
*
*
c
=
(
*
e
=
a
)
==
a
|
b
;
return
*
*
c
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
g
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
