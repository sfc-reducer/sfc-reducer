unsigned
a
;
const
char
b
(
int
,
unsigned
,
unsigned
,
short
)
;
unsigned
c
(
)
{
return
b
(
1
,
1
,
a
,
1
)
;
}
const
char
b
(
int
b
,
unsigned
a
,
unsigned
c
,
short
d
)
{
int
e
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
e
[
a
]
[
d
]
=
1
;
return
_Alignof
(
e
)
;
}
