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
__m128
,
__m128d
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
static
int
*
c
=
&
a
;
static
unsigned
*
d
=
&
a
;
char
e
(
)
{
char
a
=
1
;
*
c
=
a
;
*
c
=
*
d
;
return
a
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
