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
*
*
d
;
short
e
;
unsigned
f
(
)
{
char
a
=
0xF
;
unsigned
*
*
*
b
=
&
d
;
short
*
c
=
&
e
;
*
c
=
b
!=
&
d
|
a
;
return
*
c
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
e
)
;
return
0
;
}
