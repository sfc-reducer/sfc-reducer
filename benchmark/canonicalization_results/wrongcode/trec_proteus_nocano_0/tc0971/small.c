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
e
=
&
d
;
unsigned
g
(
)
{
int
*
*
*
a
=
&
e
;
*
*
*
a
=
-
(
a
==
&
e
)
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
g
(
)
;
c
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
