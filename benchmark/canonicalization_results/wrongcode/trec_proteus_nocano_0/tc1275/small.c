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
static
int
*
const
*
d
=
&
c
;
unsigned
e
=
1
;
int
f
(
short
*
,
int
*
,
short
,
unsigned
*
)
;
int
g
(
)
{
short
b
;
f
(
&
b
,
&
e
,
*
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
f
(
short
*
b
,
int
*
f
,
short
a
,
unsigned
*
g
)
{
int
*
*
h
=
&
c
;
c
=
f
;
*
*
d
=
e
;
*
h
=
f
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
g
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
