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
int
a
;
void
b
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
;
unsigned
g
(
)
{
int
*
b
[
]
[
1
]
=
{
&
a
,
&
a
,
&
a
}
;
d
=
b
[
1
]
[
1
]
;
++
*
d
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
