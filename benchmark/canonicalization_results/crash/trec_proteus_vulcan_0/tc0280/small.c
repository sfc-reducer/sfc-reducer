char
__m128
(
a
)
{
int
b
[
1
]
[
1
]
;
char
c
;
for
(
c
=
1
;
c
<
9
;
c
+=
1
)
b
[
a
]
[
c
]
=
1
;
return
_Alignof
(
b
)
;
}
