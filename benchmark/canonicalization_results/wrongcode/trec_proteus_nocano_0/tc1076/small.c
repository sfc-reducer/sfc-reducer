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
a
,
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
c
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
d
=
&
b
;
short
e
(
)
{
short
b
[
1
]
;
*
d
=
a
(
b
[
1
]
,
*
d
)
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
e
(
)
;
c
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
