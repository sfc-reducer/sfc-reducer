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
(
a
,
b
)
{
return
-
a
;
}
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
unsigned
c
;
unsigned
*
d
=
&
c
;
unsigned
*
*
e
=
&
d
;
int
*
*
f
;
static
int
*
*
*
g
=
&
f
;
int
h
(
unsigned
,
short
,
unsigned
short
)
;
unsigned
i
(
)
{
return
h
(
c
,
c
,
c
)
;
}
int
h
(
unsigned
b
,
short
c
,
unsigned
short
d
)
{
int
*
*
*
*
f
=
&
g
;
*
*
e
=
a
(
*
f
==
g
,
b
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
i
(
)
;
b
(
c
,
c
)
;
return
0
;
}
