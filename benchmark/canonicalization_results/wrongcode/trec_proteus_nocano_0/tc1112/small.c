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
int
*
c
=
&
a
;
char
*
*
d
;
char
*
*
*
e
=
&
d
;
static
int
*
const
*
f
=
&
c
;
static
int
*
const
*
*
const
g
=
&
f
;
unsigned
h
(
long
long
,
unsigned
,
int
,
unsigned
,
unsigned
short
)
;
unsigned
long
long
i
(
int
*
,
short
,
long
long
,
short
)
;
unsigned
long
long
j
(
char
*
*
,
unsigned
*
,
unsigned
,
char
*
*
,
char
)
;
long
k
(
)
{
return
h
(
a
,
a
,
a
,
a
,
a
)
;
}
unsigned
h
(
long
long
b
,
unsigned
a
,
int
c
,
unsigned
d
,
unsigned
short
e
)
{
int
*
f
=
&
a
;
i
(
f
,
a
,
a
,
a
)
;
return
a
;
}
unsigned
long
long
i
(
int
*
b
,
short
a
,
long
long
f
,
short
g
)
{
char
*
h
;
j
(
d
,
b
,
a
,
*
e
,
a
)
;
j
(
&
h
,
b
,
a
,
*
e
,
a
)
;
return
a
;
}
unsigned
long
long
j
(
char
*
*
a
,
unsigned
*
b
,
unsigned
d
,
char
*
*
e
,
char
f
)
{
++
*
*
*
g
;
c
++
;
return
*
b
;
}
int
main
(
)
{
k
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
