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
static
int
c
=
2
;
char
e
(
)
;
static
short
f
(
)
{
int
*
b
=
&
c
;
int
*
*
c
=
&
b
;
e
(
a
)
;
return
*
*
c
;
}
char
e
(
)
{
unsigned
char
*
b
;
unsigned
char
*
*
d
=
&
b
;
unsigned
*
e
=
&
a
;
*
e
=
d
==
&
b
^
c
;
return
*
e
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
