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
(
a
)
{
return
-
a
;
}
int
b
;
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
int
*
e
=
&
b
;
unsigned
h
[
]
;
unsigned
*
i
=
h
;
unsigned
*
*
j
=
&
i
;
int
*
k
(
unsigned
short
,
int
)
;
int
l
(
unsigned
,
unsigned
short
)
;
short
m
(
)
{
k
(
*
*
j
,
*
e
)
;
return
1
;
}
int
*
k
(
unsigned
short
a
,
int
b
)
{
l
(
*
e
,
a
)
;
return
&
a
;
}
int
l
(
unsigned
b
,
unsigned
short
c
)
{
unsigned
short
*
*
*
*
d
;
unsigned
short
*
*
*
*
*
f
=
&
d
;
*
e
=
a
(
f
==
&
d
)
;
return
*
e
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
m
(
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
