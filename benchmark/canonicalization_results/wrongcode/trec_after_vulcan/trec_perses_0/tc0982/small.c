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
char
a
(
a
,
b
)
{
return
a
*
b
;
}
int
b
;
void
d
(
a
,
c
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
e
[
]
[
1
]
[
1
]
;
short
f
;
short
*
g
(
)
;
short
*
const
h
(
short
*
,
int
,
short
*
,
unsigned
short
,
short
*
)
;
unsigned
i
(
)
{
int
*
a
=
e
[
1
]
[
1
]
;
g
(
)
;
return
*
a
;
}
short
*
g
(
)
{
short
*
b
=
&
f
;
h
(
&
f
,
1
,
b
,
1
,
b
)
;
return
&
a
;
}
short
*
const
h
(
short
*
c
,
int
d
,
short
*
e
,
unsigned
short
g
,
short
*
h
)
{
if
(
a
(
0x38
,
&
f
==
c
)
)
{
int
*
a
=
&
b
;
*
a
=
d
;
}
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
a
=
i
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
