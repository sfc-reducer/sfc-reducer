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
char
b
[
]
[
1
]
[
1
]
;
unsigned
c
;
unsigned
*
d
;
const
int
e
(
unsigned
,
char
,
int
,
short
)
;
unsigned
char
f
(
short
,
const
char
*
,
unsigned
,
char
*
,
unsigned
char
)
;
int
g
(
)
{
char
*
a
=
b
[
1
]
[
1
]
;
e
(
1
,
*
a
,
c
,
c
)
;
return
c
;
}
const
int
e
(
unsigned
a
,
char
b
,
int
c
,
short
d
)
{
if
(
!
b
)
{
char
*
a
;
f
(
b
,
a
,
b
,
&
b
,
b
)
;
}
return
a
;
}
unsigned
char
f
(
short
a
,
const
char
*
b
,
unsigned
e
,
char
*
f
,
unsigned
char
g
)
{
unsigned
*
*
h
=
&
d
;
*
h
=
&
c
;
*
d
=
-
(
h
==
&
d
)
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
b
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
