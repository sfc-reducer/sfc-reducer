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
d
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
struct
c
*
e
;
int
*
f
(
const
int
*
,
int
*
,
unsigned
)
;
char
g
(
)
{
int
*
b
=
&
a
;
f
(
b
,
b
,
a
)
;
return
a
;
}
int
*
f
(
const
int
*
b
,
int
*
a
,
unsigned
d
)
{
struct
c
*
*
c
=
&
e
;
*
a
=
9
^
(
*
a
=
c
==
&
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
int
a
=
g
(
)
;
d
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
