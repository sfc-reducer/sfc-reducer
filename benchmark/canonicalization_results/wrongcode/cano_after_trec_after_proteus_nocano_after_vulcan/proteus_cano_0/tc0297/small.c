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
int
*
*
e
=
&
c
;
unsigned
char
g
(
int
,
unsigned
char
,
int
*
,
unsigned
short
)
;
char
h
(
unsigned
)
;
char
f
(
)
{
return
g
(
h
(
a
)
,
a
,
&
a
,
a
)
;
}
unsigned
char
g
(
int
b
,
unsigned
char
__m128
,
int
*
d
,
unsigned
short
__m128d
)
{
*
e
=
&
b
;
*
d
=
*
c
;
return
*
c
;
}
char
h
(
unsigned
__m128d
)
{
short
d
=
1
;
int
*
b
;
int
*
*
c
=
&
b
;
if
(
c
++
)
{
void
*
a
=
&
d
;
*
c
=
a
;
}
return
d
;
}
int
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
