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
struct
a
{
char
a
;
int
__m128
;
int
c
;
}
;
struct
b
{
struct
a
a
;
}
;
struct
a
d
;
struct
b
e
=
{
1
}
;
unsigned
f
(
)
{
e
.
a
=
d
;
e
.
a
=
e
.
a
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
f
(
)
;
b
(
e
.
a
.
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
