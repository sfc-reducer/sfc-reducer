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
int
*
c
=
&
b
;
static
unsigned
*
d
=
&
b
;
char
e
(
)
{
char
b
=
1
;
*
c
=
b
;
*
c
=
*
d
;
return
b
;
}
char
main
(
)
{
char
c
=
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
