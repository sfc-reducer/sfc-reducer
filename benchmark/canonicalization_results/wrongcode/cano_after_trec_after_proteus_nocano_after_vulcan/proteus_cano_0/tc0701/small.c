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
struct
a
{
short
:
10
;
char
__m128
;
int
b
:
9
;
char
:
1
;
}
;
void
*
c
;
int
*
d
(
)
;
struct
a
e
(
char
*
,
unsigned
,
unsigned
,
int
*
,
unsigned
)
;
char
f
(
)
{
void
*
b
=
0
;
d
(
e
(
c
,
a
,
1
,
b
,
1
)
)
;
return
a
;
}
int
*
d
(
struct
a
e
)
{
int
*
b
=
&
a
;
*
b
=
e
.
b
;
return
b
;
}
struct
a
e
(
char
*
a
,
unsigned
__m128
,
unsigned
d
,
int
*
e
,
unsigned
b
)
{
struct
a
f
=
{
1
,
1
}
;
return
f
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
