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
int
d
[
]
;
int
*
const
e
=
&
d
[
1
]
;
static
int
*
const
*
f
=
&
e
;
int
*
g
(
)
;
int
h
(
unsigned
char
,
int
*
,
const
int
*
,
unsigned
char
,
unsigned
)
;
char
c
(
)
{
g
(
)
;
return
*
*
f
;
}
int
*
g
(
)
{
*
*
f
=
h
(
a
,
e
,
d
,
a
,
a
)
;
return
b
;
}
int
h
(
unsigned
char
__m128
,
int
*
b
,
const
int
*
c
,
unsigned
char
__m128d
,
unsigned
__m128i
)
{
*
*
f
=
1
;
return
*
b
;
}
char
main
(
)
{
char
a
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
