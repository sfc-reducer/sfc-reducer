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
c
(
__m128
,
a
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
*
d
;
char
e
=
7
;
long
f
[
6
]
=
{
1
}
;
int
*
*
*
g
=
&
d
;
static
char
h
=
1
;
char
i
(
)
{
return
++
f
[
e
]
;
}
char
main
(
)
{
i
(
)
;
c
(
a
,
h
)
;
return
0
;
}
