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
(
char
,
int
*
,
int
*
,
int
*
)
;
int
*
d
(
unsigned
,
short
,
int
,
int
*
,
unsigned
short
)
;
unsigned
e
(
)
{
unsigned
*
b
=
&
a
;
c
(
1
,
b
,
d
(
a
,
1
,
1
,
&
a
,
1
)
,
b
)
;
return
a
;
}
int
*
c
(
char
a
,
int
*
b
,
int
*
c
,
int
*
d
)
{
int
e
=
4
;
int
*
*
f
=
&
d
;
int
*
*
g
=
&
d
;
int
*
*
*
h
=
&
g
;
*
b
=
e
^
f
!=
*
h
;
return
b
;
}
int
*
d
(
unsigned
a
,
short
d
,
int
b
,
int
*
c
,
unsigned
short
e
)
{
return
c
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
