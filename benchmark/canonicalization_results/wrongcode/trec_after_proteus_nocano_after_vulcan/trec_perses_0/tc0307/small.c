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
int
a
;
void
b
(
c
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
short
e
;
unsigned
c
(
)
{
int
c
=
0xC
;
short
*
a
=
&
e
;
*
d
=
a
!=
&
e
^
c
;
return
!
a
;
}
int
main
(
)
{
c
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
