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
d
;
int
c
;
static
const
int
*
e
=
&
c
;
int
f
(
unsigned
long
long
)
;
int
*
g
(
unsigned
short
,
int
*
)
;
int
h
(
)
{
int
*
printf
=
&
c
;
f
(
a
)
;
*
printf
=
*
e
;
return
*
e
;
}
int
f
(
unsigned
long
long
a
)
{
int
*
*
b
=
&
d
;
int
*
d
=
&
c
;
*
b
=
g
(
a
,
0
)
;
*
d
^=
*
*
b
;
return
a
;
}
int
*
g
(
unsigned
short
c
,
int
*
d
)
{
char
e
=
-
1
;
int
*
b
=
&
a
;
*
b
=
e
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
