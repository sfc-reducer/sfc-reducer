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
c
[
]
;
static
int
*
d
=
&
c
[
1
]
;
unsigned
b
(
)
{
int
*
e
=
&
c
[
1
]
;
*
d
=
1
;
*
d
=
*
e
;
return
*
d
;
}
int
main
(
)
{
int
e
=
b
(
)
;
a
(
e
,
e
)
;
return
0
;
}
