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
char
d
;
static
char
*
e
=
&
d
;
short
f
;
int
g
(
)
{
short
*
a
=
&
f
;
unsigned
b
=
4
;
*
a
=
b
*=
e
==
&
d
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
