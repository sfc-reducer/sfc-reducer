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
char
__m128
;
int
__m128d
;
char
__m128i
;
int
d
;
}
;
struct
a
c
=
{
1
}
;
int
d
(
char
,
struct
a
)
;
char
e
(
)
{
return
d
(
1
,
c
)
;
}
int
d
(
char
b
,
struct
a
__m128
)
{
int
*
e
=
&
a
;
char
*
a
=
&
b
;
*
e
=
__alignof__
(
c
)
;
return
*
a
;
}
char
main
(
)
{
e
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
