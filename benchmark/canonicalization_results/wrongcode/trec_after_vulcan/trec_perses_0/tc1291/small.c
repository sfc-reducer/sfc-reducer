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
unsigned
c
,
char
*
b
,
int
d
)
{
a
+=
c
;
}
void
d
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
char
e
;
unsigned
char
*
c
=
&
e
;
int
*
f
(
int
*
,
int
*
,
char
,
short
)
;
int
*
g
(
int
*
,
short
,
int
*
,
unsigned
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
e
;
unsigned
a
=
4
;
int
*
*
c
=
&
e
;
*
c
=
f
(
e
,
g
(
&
a
,
a
,
&
a
,
a
)
,
a
,
a
)
;
return
*
*
c
;
}
int
*
f
(
int
*
a
,
int
*
b
,
char
c
,
short
d
)
{
return
&
a
;
}
int
*
g
(
int
*
a
,
short
b
,
int
*
d
,
unsigned
char
e
)
{
unsigned
char
*
*
f
=
&
c
;
*
c
=
f
!=
&
c
^
b
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
c
=
h
(
)
;
b
(
e
,
""
,
a
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
