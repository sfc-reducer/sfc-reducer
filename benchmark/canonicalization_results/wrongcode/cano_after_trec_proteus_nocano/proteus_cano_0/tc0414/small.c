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
c
(
__m128
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
a
=
1
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
a
=
0
;
a
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
