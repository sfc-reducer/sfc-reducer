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
c
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
d
[
]
;
long
long
e
;
int
*
const
*
f
(
int
*
,
char
,
int
*
*
,
int
*
*
)
;
char
g
(
)
{
int
*
b
[
]
=
{
d
}
;
f
(
d
,
a
,
b
,
b
)
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
int
*
a
,
char
c
,
int
*
*
d
,
int
*
*
f
)
{
int
*
*
*
b
[
1
]
;
int
*
*
*
*
g
=
&
b
[
1
]
;
long
long
*
h
=
&
e
;
*
h
=
-
(
g
==
&
b
[
1
]
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
g
(
)
;
c
(
e
,
a
)
;
return
0
;
}
