unsigned
a
(
short
a
)
{
unsigned
b
[
1
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
=
1
;
for
(
a
=
1
;
a
<
10
;
a
+=
1
)
++
b
[
c
]
[
c
]
[
a
]
;
_Alignof
(
b
)
;
return
a
;
}
