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
*
c
=
&
a
;
int
a
=
1
;
static
const
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
static
int
*
f
=
&
a
;
unsigned
g
(
short
,
char
,
unsigned
short
,
unsigned
,
int
)
;
int
h
(
int
,
unsigned
char
,
unsigned
char
,
int
)
;
int
i
(
)
{
int
*
*
*
b
=
&
e
;
*
c
=
a
||
h
(
1
,
a
,
a
,
a
)
;
g
(
a
,
a
,
a
,
*
*
*
b
,
a
)
;
return
a
;
}
unsigned
g
(
short
b
,
char
c
,
unsigned
short
a
,
unsigned
e
,
int
g
)
{
const
int
*
*
h
=
&
d
;
*
f
=
0
;
*
f
=
*
*
h
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
char
b
,
unsigned
char
c
,
int
e
)
{
return
*
d
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
a
,
a
)
;
return
0
;
}
