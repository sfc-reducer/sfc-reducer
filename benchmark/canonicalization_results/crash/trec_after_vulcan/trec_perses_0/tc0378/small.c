_Bool
a
(
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
;
unsigned
c
;
short
d
;
for
(
c
=
1
;
c
;
c
+=
1
)
for
(
d
=
1
;
d
<
8
;
d
+=
1
)
b
[
c
]
[
d
]
=
1
;
b
[
1
]
[
1
]
&&
a
(
)
;
return
a
;
}
