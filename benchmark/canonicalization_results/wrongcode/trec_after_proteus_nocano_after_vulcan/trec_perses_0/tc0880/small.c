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
c
;
int
*
*
d
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
*
const
*
f
(
unsigned
char
,
int
*
*
,
char
)
;
int
*
*
g
(
int
*
*
,
unsigned
long
long
)
;
char
h
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
f
(
*
b
,
d
,
*
b
)
;
++
*
b
;
return
a
;
}
int
*
const
*
f
(
unsigned
char
a
,
int
*
*
b
,
char
d
)
{
int
*
e
=
&
c
;
++
*
e
;
g
(
&
e
,
a
)
;
return
b
;
}
int
*
*
g
(
int
*
*
b
,
unsigned
long
long
d
)
{
int
*
c
=
&
a
;
*
c
=
*
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
