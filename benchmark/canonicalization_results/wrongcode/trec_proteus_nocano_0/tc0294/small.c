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
)
{
return
-
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
short
d
;
short
*
e
[
]
;
int
f
(
)
{
short
*
c
=
&
d
;
int
*
f
=
&
b
;
*
f
=
a
(
(
*
e
=
&
d
)
==
c
)
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
f
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
