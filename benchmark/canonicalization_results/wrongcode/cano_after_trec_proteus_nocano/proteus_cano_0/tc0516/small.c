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
char
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
char
c
=
-
7
;
unsigned
char
d
(
unsigned
,
unsigned
char
,
short
)
;
const
short
e
(
short
,
unsigned
char
)
;
char
f
(
)
{
return
d
(
a
,
a
,
a
)
;
}
unsigned
char
d
(
unsigned
__m128
,
unsigned
char
__m128d
,
short
__m128i
)
{
return
e
(
a
,
a
)
;
}
const
short
e
(
short
__m128
,
unsigned
char
__m128d
)
{
const
unsigned
d
=
4294967295
;
c
=
(
d
|
0UL
)
<
c
;
return
c
;
}
int
main
(
)
{
while
(
f
(
)
)
b
(
a
,
a
)
;
}
