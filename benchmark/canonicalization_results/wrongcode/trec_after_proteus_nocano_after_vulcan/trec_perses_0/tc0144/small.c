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
void
a
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
short
b
;
char
*
c
;
unsigned
short
*
d
=
&
b
;
unsigned
short
*
*
e
=
&
d
;
const
int
f
(
short
,
unsigned
)
;
char
g
(
)
{
f
(
b
,
b
)
;
return
*
d
;
}
const
int
f
(
short
a
,
unsigned
b
)
{
char
*
*
d
=
&
c
;
char
*
*
*
f
=
&
d
;
char
*
*
g
=
&
c
;
unsigned
c
=
0xB
;
*
*
e
=
*
f
!=
g
^
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
d
=
g
(
)
;
a
(
b
,
b
)
;
return
0
;
}
