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
=
&
a
;
unsigned
*
*
d
;
int
*
*
e
;
int
*
g
(
int
*
,
unsigned
)
;
char
h
(
int
*
,
short
,
int
*
*
,
char
)
;
int
i
(
)
{
g
(
c
,
a
)
;
return
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
unsigned
f
)
{
h
(
&
f
,
*
a
,
e
,
f
)
;
return
a
;
}
char
h
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
*
e
,
char
f
)
{
unsigned
*
*
*
g
=
&
d
;
unsigned
*
*
*
h
=
&
d
;
*
c
=
(
*
a
=
g
!=
h
)
|
0x7
;
return
*
a
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
a
,
a
)
;
return
0
;
}
