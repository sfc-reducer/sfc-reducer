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
void
a
(
a
,
__m128
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
b
;
static
char
c
=
0x6
;
void
*
e
(
)
{
unsigned
long
long
*
a
;
unsigned
long
long
*
*
d
=
&
a
;
int
*
e
=
&
b
;
*
e
=
d
==
&
a
^
c
;
return
d
;
}
char
main
(
)
{
e
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
