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
c
=
&
a
;
int
d
(
int
,
long
long
,
unsigned
,
short
)
;
int
e
(
)
{
return
d
(
*
c
,
a
,
a
,
a
)
;
}
int
d
(
int
b
,
long
long
c
,
unsigned
d
,
short
e
)
{
unsigned
*
f
;
unsigned
*
*
g
=
&
f
;
a
|=
-
(
g
==
&
f
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
e
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
