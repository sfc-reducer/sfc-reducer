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
unsigned
*
d
=
&
b
;
unsigned
*
*
e
=
&
d
;
int
*
f
[
]
;
unsigned
g
(
)
{
int
*
*
b
[
]
=
{
f
}
;
*
*
e
=
a
(
0xE
,
1
)
^
*
b
==
f
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
