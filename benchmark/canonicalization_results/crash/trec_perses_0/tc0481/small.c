unsigned
b
;
int
c
[
]
[
1
]
;
int
f
(
short
,
unsigned
char
,
int
)
;
int
g
(
unsigned
long
long
,
unsigned
,
int
,
char
,
unsigned
char
)
;
unsigned
a
(
)
{
int
a
=
1
;
unsigned
b
=
0xED
;
f
(
a
,
b
,
1
)
;
return
a
;
}
int
f
(
short
a
,
unsigned
char
b
,
int
c
)
{
g
(
a
,
a
,
a
,
b
,
a
)
;
return
a
;
}
int
g
(
unsigned
long
long
a
,
unsigned
d
,
int
e
,
char
f
,
unsigned
char
g
)
{
for
(
;
f
;
f
+=
1
)
c
[
b
]
[
f
]
=
1
;
return
1
;
}
