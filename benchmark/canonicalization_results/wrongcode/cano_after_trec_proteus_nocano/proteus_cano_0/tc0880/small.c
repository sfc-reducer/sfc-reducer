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
c
;
int
*
*
d
;
static
unsigned
*
e
=
&
c
;
int
*
const
*
f
(
unsigned
char
,
int
*
*
,
char
)
;
int
*
*
g
(
int
*
*
,
unsigned
long
long
)
;
char
h
(
)
{
int
*
a
=
&
c
;
f
(
*
a
,
d
,
*
a
)
;
++
*
a
;
return
c
;
}
int
*
const
*
f
(
unsigned
char
__m128
,
int
*
*
b
,
char
__m128d
)
{
int
*
e
=
&
c
;
++
*
e
;
g
(
&
e
,
a
)
;
return
b
;
}
int
*
*
g
(
int
*
*
b
,
unsigned
long
long
__m128
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
*
e
;
return
b
;
}
void
main
(
)
{
while
(
h
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
