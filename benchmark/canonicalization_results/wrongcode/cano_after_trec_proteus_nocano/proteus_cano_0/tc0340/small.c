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
char
b
,
void
*
c
,
char
__m128
)
{
a
=
b
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
int
d
[
]
[
1
]
;
int
*
e
=
*
d
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
unsigned
char
g
(
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
)
;
}
unsigned
char
g
(
char
__m128
)
{
int
*
*
b
=
&
e
;
int
*
*
*
c
=
&
b
;
++
*
*
c
;
++
*
*
f
;
return
a
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
for
(
e
++
;
!
a
;
a
++
)
b
(
d
[
a
]
[
a
]
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
