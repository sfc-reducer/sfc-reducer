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
c
(
int
a
,
int
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
e
;
short
f
;
static
unsigned
g
=
4
;
unsigned
short
h
(
unsigned
)
;
unsigned
char
*
i
(
int
,
unsigned
char
*
,
int
,
unsigned
char
*
,
short
)
;
short
*
j
(
unsigned
char
*
,
char
,
unsigned
,
unsigned
char
*
*
,
unsigned
char
*
)
;
unsigned
char
*
k
(
char
,
unsigned
short
)
;
char
l
(
short
*
,
unsigned
char
*
,
char
,
unsigned
char
*
const
*
)
;
int
m
(
)
{
int
*
c
=
&
a
;
h
(
a
)
;
return
*
c
;
}
unsigned
short
h
(
unsigned
a
)
{
short
*
b
=
&
f
;
unsigned
char
*
c
=
&
e
;
j
(
k
(
l
(
b
,
i
(
a
,
c
,
a
,
c
,
a
)
,
a
,
&
c
)
,
a
)
,
a
,
a
,
&
c
,
c
)
;
return
a
;
}
unsigned
char
*
i
(
int
a
,
unsigned
char
*
b
,
int
c
,
unsigned
char
*
d
,
short
e
)
{
return
&
a
;
}
short
*
j
(
unsigned
char
*
b
,
char
c
,
unsigned
d
,
unsigned
char
*
*
e
,
unsigned
char
*
h
)
{
const
short
*
f
;
const
short
*
*
j
=
&
f
;
int
*
k
=
&
a
;
*
k
^=
j
!=
&
f
|
g
;
return
b
;
}
unsigned
char
*
k
(
char
a
,
unsigned
short
b
)
{
return
c
;
}
char
l
(
short
*
a
,
unsigned
char
*
b
,
char
c
,
unsigned
char
*
const
*
d
)
{
return
c
;
}
int
main
(
)
{
m
(
)
;
c
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
