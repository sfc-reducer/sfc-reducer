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
char
__m128
,
void
*
c
,
char
__m128d
)
{
a
++
;
}
void
c
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
d
=
&
a
;
static
const
int
*
e
=
&
a
;
unsigned
char
g
(
int
,
short
,
char
)
;
char
h
(
)
{
return
g
(
a
,
1
,
1
)
;
}
unsigned
char
g
(
int
__m128
,
short
__m128d
,
char
f
)
{
for
(
;
a
<=
4
;
a
++
)
{
*
d
=
a
;
if
(
*
e
)
;
else
{
unsigned
*
b
=
&
a
;
++
*
b
;
}
}
return
*
d
;
}
int
main
(
)
{
h
(
)
;
b
(
a
,
""
,
a
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
