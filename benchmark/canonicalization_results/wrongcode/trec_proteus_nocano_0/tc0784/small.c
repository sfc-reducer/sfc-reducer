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
int
*
c
=
&
a
;
const
unsigned
char
d
=
247
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
unsigned
short
g
(
unsigned
,
unsigned
char
)
;
char
h
(
)
{
return
g
(
a
,
a
)
;
}
unsigned
short
g
(
unsigned
a
,
unsigned
char
b
)
{
return
*
c
=
*
*
f
<
d
;
}
int
main
(
)
{
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
