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
unsigned
b
;
int
*
c
=
&
b
;
unsigned
d
[
]
;
short
e
(
)
{
unsigned
*
printf
=
&
d
[
1
]
;
int
*
*
a
=
&
c
;
if
(
(
printf
==
&
d
[
1
]
)
<
(
b
|
0xC
)
<=
*
*
a
)
b
=
1
;
return
b
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
e
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
