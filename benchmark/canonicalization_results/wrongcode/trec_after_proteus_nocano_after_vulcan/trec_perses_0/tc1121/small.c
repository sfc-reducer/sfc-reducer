signed
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
d
(
a
,
b
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
e
;
long
f
=
7
;
long
g
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
c
=
&
e
;
static
int
h
=
1
;
unsigned
i
(
)
{
return
++
g
[
f
]
;
}
int
main
(
)
{
i
(
)
;
d
(
h
,
a
)
;
return
0
;
}
