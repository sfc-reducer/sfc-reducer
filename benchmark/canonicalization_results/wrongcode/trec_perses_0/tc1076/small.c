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
long
a
(
unsigned
a
,
unsigned
b
)
{
return
a
;
}
int
b
;
void
d
(
int
a
,
int
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
e
;
int
*
f
=
&
b
;
short
g
(
)
{
int
*
b
=
&
e
;
short
c
[
1
]
;
*
f
=
a
(
c
[
1
]
,
*
b
)
;
return
*
b
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
1
;
g
(
)
;
d
(
b
,
a
)
;
return
0
;
}
