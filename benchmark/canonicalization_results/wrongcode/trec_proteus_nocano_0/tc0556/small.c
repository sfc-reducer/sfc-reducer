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
short
c
(
char
,
short
)
;
unsigned
d
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
c
(
a
,
*
b
)
;
return
a
;
}
short
c
(
char
b
,
short
c
)
{
int
*
d
=
&
a
;
int
*
*
f
=
&
d
;
int
*
*
*
g
=
&
f
;
*
d
=
d
==
&
a
;
++
*
*
*
g
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
