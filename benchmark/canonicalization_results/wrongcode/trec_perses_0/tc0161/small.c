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
unsigned
a
(
unsigned
a
,
unsigned
b
)
{
return
a
-
b
;
}
int
b
;
void
c
(
unsigned
a
,
char
*
c
,
int
d
)
{
b
+=
a
;
}
void
d
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
unsigned
e
=
1
;
int
f
[
]
[
1
]
;
unsigned
g
(
)
{
short
*
*
c
[
1
]
[
1
]
;
short
*
*
*
d
=
&
c
[
1
]
[
1
]
;
f
[
1
]
[
1
]
=
a
(
d
==
c
,
e
)
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
int
a
=
1
;
g
(
)
;
c
(
f
[
a
]
[
a
]
,
""
,
a
)
;
d
(
b
,
a
)
;
return
0
;
}
