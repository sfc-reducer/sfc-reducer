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
unsigned
*
c
=
&
a
;
unsigned
*
*
d
=
&
c
;
int
*
*
e
;
static
int
*
*
*
f
=
&
e
;
int
g
(
unsigned
,
short
,
unsigned
short
)
;
unsigned
h
(
)
{
int
a
=
0x2
;
g
(
a
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
g
(
unsigned
a
,
short
b
,
unsigned
short
c
)
{
int
*
*
*
*
e
=
&
f
;
*
*
d
=
a
*=
*
e
==
f
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
h
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
