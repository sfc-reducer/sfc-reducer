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
short
e
(
int
,
unsigned
char
)
;
const
unsigned
short
f
(
short
,
int
*
)
;
char
g
(
)
{
return
e
(
a
,
1
)
;
}
short
e
(
int
__m128
,
unsigned
char
__m128d
)
{
f
(
a
,
0
)
;
++
*
*
d
;
c
++
;
return
a
;
}
const
unsigned
short
f
(
short
__m128
,
int
*
b
)
{
void
*
d
=
c
--
;
return
*
c
;
}
char
main
(
)
{
g
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
