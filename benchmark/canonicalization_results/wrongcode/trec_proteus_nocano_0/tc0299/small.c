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
b
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
short
c
;
short
*
d
=
&
c
;
short
*
*
e
=
&
d
;
int
*
f
(
int
,
int
*
,
unsigned
short
,
unsigned
char
)
;
unsigned
g
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
f
(
*
b
,
b
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
int
*
f
(
int
a
,
int
*
b
,
unsigned
short
c
,
unsigned
char
d
)
{
const
unsigned
short
f
=
65535
;
*
b
=
*
*
e
>=
f
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
a
,
a
)
;
return
0
;
}
