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
c
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
d
;
static
short
*
e
=
&
d
;
char
f
;
unsigned
g
(
)
{
unsigned
a
=
0x3
;
short
*
b
=
&
d
;
char
*
c
=
&
f
;
*
c
=
e
==
b
|
a
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
g
(
)
;
c
(
a
,
f
)
;
return
0
;
}
