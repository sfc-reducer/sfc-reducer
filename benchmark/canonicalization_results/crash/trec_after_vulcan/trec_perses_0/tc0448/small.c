long
a
;
unsigned
char
b
(
short
,
char
,
char
,
short
,
short
)
;
unsigned
c
(
)
{
b
(
1
,
a
,
1
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
char
b
(
short
a
,
char
b
,
char
d
,
short
e
,
short
f
)
{
int
g
[
1
]
[
1
]
;
for
(
;
d
<
8
;
d
+=
1
)
g
[
a
]
[
d
]
=
1
;
c
(
g
)
;
return
1
;
}
