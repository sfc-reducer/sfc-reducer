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
c
=
&
a
;
int
*
d
(
unsigned
)
;
char
e
(
)
{
d
(
sizeof
a
)
;
return
*
c
;
}
int
*
d
(
unsigned
b
)
{
int
*
d
=
&
a
;
*
d
=
b
;
*
d
=
*
c
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
