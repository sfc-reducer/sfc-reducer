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
static
int
e
=
-
1
;
volatile
int
*
f
=
&
a
;
volatile
int
*
*
g
=
&
f
;
volatile
int
*
*
*
h
=
&
g
;
static
int
i
(
unsigned
char
,
char
,
unsigned
short
,
unsigned
short
)
;
int
j
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
*
c
=
i
(
a
,
1
,
e
,
a
)
;
return
*
*
*
h
;
}
int
i
(
unsigned
char
a
,
char
b
,
unsigned
short
c
,
unsigned
short
d
)
{
unsigned
char
*
e
;
unsigned
char
*
*
f
=
&
e
;
if
(
c
|=
(
*
f
=
&
a
)
==
&
a
)
return
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
j
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
