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
unsigned
*
c
;
short
d
(
char
)
;
int
e
(
)
;
int
f
(
)
{
return
d
(
a
)
;
}
short
d
(
char
b
)
{
int
*
c
=
&
a
;
e
(
*
c
,
c
,
c
)
;
return
a
;
}
int
e
(
int
a
,
int
*
b
,
int
*
d
)
{
unsigned
*
*
e
=
&
c
;
*
b
=
-
(
&
c
==
e
)
;
return
a
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
