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
b
;
signed
c
;
}
;
struct
a
d
[
]
=
{
1
}
;
unsigned
e
(
)
{
*
d
=
d
[
1
]
;
*
d
=
*
d
;
return
1
;
}
int
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
d
->
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
