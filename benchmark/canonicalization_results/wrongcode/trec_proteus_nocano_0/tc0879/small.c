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
const
int
c
(
unsigned
char
,
int
,
short
,
short
)
;
int
d
(
)
{
return
c
(
a
,
a
,
a
,
a
)
;
}
const
int
c
(
unsigned
char
b
,
int
c
,
short
d
,
short
e
)
{
const
unsigned
short
f
=
65535
;
if
(
d
>=
f
)
a
++
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
d
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
