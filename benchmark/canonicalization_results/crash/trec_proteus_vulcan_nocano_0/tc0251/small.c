unsigned
char
a
(
unsigned
short
,
unsigned
short
,
unsigned
char
,
short
)
;
unsigned
short
b
(
int
,
char
,
short
)
;
unsigned
c
(
)
{
short
c
=
1
;
a
(
c
,
c
,
1
,
c
)
;
return
c
;
}
unsigned
char
a
(
unsigned
short
c
,
unsigned
short
a
,
unsigned
char
d
,
short
e
)
{
return
b
(
a
,
a
,
a
)
;
}
unsigned
short
b
(
int
a
,
char
b
,
short
c
)
{
int
d
[
1
]
;
for
(
;
c
<
9
;
c
+=
1
)
++
d
[
c
]
;
_Alignof
(
d
)
;
return
1
;
}
