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
d
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
}
c
;
unsigned
e
(
)
{
struct
a
d
[
]
[
1
]
=
{
1
}
;
c
=
d
[
1
]
[
1
]
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
int
a
=
e
(
)
;
b
(
c
.
a
,
""
,
a
)
;
d
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
