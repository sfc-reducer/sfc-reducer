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
int
a
=
1
;
char
d
;
unsigned
f
;
int
*
g
=
&
a
;
static
int
*
*
h
=
&
g
;
static
int
*
const
*
j
=
&
g
;
int
*
k
(
long
long
,
unsigned
char
,
int
*
)
;
int
*
l
(
char
,
int
*
,
const
int
*
,
char
*
,
int
)
;
int
m
(
)
{
int
*
b
=
&
a
;
char
*
c
=
&
d
;
int
a
=
1
;
if
(
*
h
=
k
(
a
,
a
,
l
(
*
b
,
&
a
,
b
,
c
,
a
)
)
)
;
return
a
;
}
int
*
k
(
long
long
a
,
unsigned
char
b
,
int
*
c
)
{
int
*
d
=
&
f
;
*
h
=
c
;
*
*
j
=
*
d
;
return
c
;
}
int
*
l
(
char
a
,
int
*
b
,
const
int
*
c
,
char
*
d
,
int
e
)
{
return
b
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
