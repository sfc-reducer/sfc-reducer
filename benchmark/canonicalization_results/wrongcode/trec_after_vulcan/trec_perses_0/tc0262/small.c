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
void
a
(
a
,
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
struct
c
{
int
a
;
}
;
unsigned
b
=
4
;
struct
c
c
;
unsigned
*
d
=
&
b
;
char
e
(
)
{
struct
c
*
a
=
&
c
;
struct
c
*
e
[
]
=
{
&
c
,
&
c
}
;
b
=
(
a
==
e
[
1
]
)
>=
*
d
;
return
*
d
;
}
int
main
(
)
{
int
b
=
e
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
