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
b
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
int
c
[
]
;
char
d
=
1
;
char
*
f
=
&
d
;
unsigned
g
(
)
{
int
*
b
=
&
c
[
1
]
;
*
b
=
*
f
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
c
=
g
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
