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
char
c
;
int
*
d
=
&
a
;
int
*
*
e
;
char
*
f
(
unsigned
)
;
static
short
g
(
unsigned
short
,
unsigned
char
,
short
,
char
*
)
;
static
int
h
(
int
,
unsigned
long
long
,
unsigned
,
char
*
)
;
long
i
(
)
{
f
(
a
)
;
return
a
;
}
char
*
f
(
unsigned
a
)
{
char
*
b
=
&
c
;
g
(
h
(
a
,
a
,
a
,
b
)
,
a
,
a
,
b
)
;
return
b
;
}
short
g
(
unsigned
short
a
,
unsigned
char
b
,
short
c
,
char
*
f
)
{
int
g
=
1
;
a
:
;
*
d
=
1
;
if
(
a
)
*
d
=
g
;
else
*
e
=
&
g
;
return
a
;
}
int
h
(
int
a
,
unsigned
long
long
b
,
unsigned
c
,
char
*
d
)
{
int
e
=
1
;
int
*
f
=
&
a
;
int
*
*
g
=
&
f
;
&
g
;
return
e
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
