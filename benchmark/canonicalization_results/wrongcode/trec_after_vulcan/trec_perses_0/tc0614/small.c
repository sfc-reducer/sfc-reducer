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
void
a
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
int
b
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
short
*
*
*
f
=
&
e
;
unsigned
g
(
)
{
const
unsigned
short
a
=
0xE3FF
;
int
*
printf
=
&
b
;
*
printf
=
*
*
*
f
<=
a
;
return
*
printf
;
}
int
main
(
)
{
int
b
=
g
(
)
;
a
(
b
,
b
)
;
return
0
;
}
