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
c
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
;
int
*
*
e
=
&
c
;
unsigned
char
g
(
int
,
unsigned
char
,
int
*
,
unsigned
short
)
;
char
h
(
unsigned
)
;
int
f
(
)
{
return
g
(
h
(
a
)
,
a
,
&
a
,
a
)
;
}
unsigned
char
g
(
int
b
,
unsigned
char
a
,
int
*
d
,
unsigned
short
f
)
{
*
e
=
&
b
;
*
d
=
*
c
;
return
*
c
;
}
char
h
(
unsigned
a
)
{
int
d
=
1
;
int
*
b
;
int
*
*
c
=
&
b
;
if
(
c
++
)
{
int
*
a
=
&
d
;
*
c
=
a
;
}
return
d
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
