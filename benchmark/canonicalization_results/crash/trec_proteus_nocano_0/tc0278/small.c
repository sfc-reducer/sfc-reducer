int
a
;
char
b
;
unsigned
c
(
)
{
unsigned
c
[
1
]
[
1
]
;
for
(
b
=
0
;
b
<
7
;
b
+=
1
)
c
[
a
]
[
b
]
=
1
;
_Alignof
(
c
)
;
return
a
;
}
