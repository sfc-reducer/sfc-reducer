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
e
[
]
;
int
*
i
=
e
;
static
int
*
const
*
f
=
&
i
;
static
unsigned
c
;
short
g
(
)
{
for
(
c
=
1
;
c
<=
6
;
c
++
)
{
int
*
*
a
=
&
i
;
++
*
a
;
++
*
*
f
;
}
return
a
;
}
int
main
(
)
{
g
(
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
