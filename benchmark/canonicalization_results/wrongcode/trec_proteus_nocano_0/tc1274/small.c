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
short
*
e
=
&
d
;
unsigned
f
(
)
{
unsigned
*
a
;
unsigned
*
*
b
=
&
a
;
*
e
=
-
(
b
==
&
a
)
;
return
*
e
;
}
int
main
(
)
{
f
(
)
;
c
(
a
,
d
)
;
return
0
;
}
