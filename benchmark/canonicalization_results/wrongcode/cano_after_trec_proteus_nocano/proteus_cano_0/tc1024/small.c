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
;
static
int
*
*
d
=
&
c
;
short
e
;
short
*
f
=
&
e
;
unsigned
char
g
(
unsigned
char
)
;
unsigned
short
h
(
short
*
,
short
*
,
char
)
;
char
i
(
)
{
g
(
a
)
;
return
*
f
;
}
unsigned
char
g
(
unsigned
char
__m128
)
{
return
h
(
f
,
f
,
a
)
;
}
unsigned
short
h
(
short
*
b
,
short
*
e
,
char
__m128
)
{
int
*
*
g
=
&
c
;
int
*
c
=
&
a
;
char
a
=
0x6
;
*
c
=
a
^
d
==
g
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
i
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
