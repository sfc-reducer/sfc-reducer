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
c
;
static
unsigned
*
b
=
&
c
;
char
d
(
)
{
int
*
printf
=
&
c
;
c
=
1
;
*
printf
=
*
b
;
return
c
;
}
char
main
(
)
{
d
(
)
;
a
(
c
,
c
)
;
return
0
;
}
