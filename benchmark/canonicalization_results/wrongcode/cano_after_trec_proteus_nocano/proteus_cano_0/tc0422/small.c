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
int
*
c
=
&
a
;
static
int
*
const
*
d
=
&
c
;
unsigned
short
e
(
int
,
short
,
int
,
char
,
char
)
;
char
f
(
)
{
e
(
a
,
a
,
a
,
a
,
a
)
;
return
a
;
}
unsigned
short
e
(
int
a
,
short
__m128
,
int
__m128d
,
char
__m128i
,
char
g
)
{
int
*
*
h
=
&
c
;
*
h
=
&
a
;
*
h
=
*
d
;
++
*
c
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
f
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
