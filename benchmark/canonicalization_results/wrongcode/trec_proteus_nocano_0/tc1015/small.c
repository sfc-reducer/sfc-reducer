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
int
*
*
c
=
&
b
;
*
*
c
=
-
(
*
c
==
&
a
)
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
