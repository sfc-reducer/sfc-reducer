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
unsigned
*
d
=
&
a
;
static
int
*
e
=
&
a
;
char
c
(
)
{
*
e
=
1
;
*
e
=
*
d
;
return
1
;
}
char
main
(
)
{
char
d
=
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
