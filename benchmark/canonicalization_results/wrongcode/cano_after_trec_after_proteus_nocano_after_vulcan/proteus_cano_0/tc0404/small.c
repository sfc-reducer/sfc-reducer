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
c
,
void
*
d
,
char
__m128
)
{
a
=
c
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
"hecksum = %x"
,
a
)
;
}
struct
{
int
__m128
;
short
d
;
}
static
d
[
]
=
{
1
}
;
int
main
(
)
{
a
++
;
b
(
d
[
a
]
.
d
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
