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
static
unsigned
c
=
5
;
char
d
;
char
*
e
=
&
d
;
char
*
*
f
=
&
e
;
char
g
(
unsigned
,
unsigned
char
,
int
*
,
char
)
;
unsigned
h
(
)
{
int
*
d
=
&
a
;
g
(
*
d
,
*
d
,
d
,
*
*
f
)
;
return
*
d
;
}
char
g
(
unsigned
d
,
unsigned
char
f
,
int
*
e
,
char
b
)
{
int
*
*
g
=
&
e
;
*
e
=
*
g
==
&
a
|
c
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
h
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
