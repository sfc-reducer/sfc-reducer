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
d
,
int
b
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
char
e
;
short
c
;
short
*
f
=
&
c
;
unsigned
char
*
g
=
&
e
;
unsigned
char
*
*
h
=
&
g
;
unsigned
i
(
)
{
char
*
a
;
char
*
*
b
=
&
a
;
unsigned
c
=
0xF
;
char
*
*
d
=
&
a
;
*
f
=
b
!=
d
|
c
;
return
*
*
h
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
i
(
)
;
b
(
c
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
