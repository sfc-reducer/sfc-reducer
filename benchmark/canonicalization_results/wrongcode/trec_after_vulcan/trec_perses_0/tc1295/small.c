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
void
a
(
b
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
short
c
=
1
;
int
d
[
]
;
static
int
*
b
=
&
d
[
1
]
;
short
*
e
=
&
c
;
int
f
(
)
{
int
*
a
=
&
d
[
1
]
;
*
b
=
*
e
;
*
b
=
*
a
;
return
*
a
;
}
int
main
(
)
{
int
b
=
f
(
)
;
a
(
b
,
b
)
;
return
0
;
}
