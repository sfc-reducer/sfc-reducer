char
a
[
]
;
unsigned
b
(
short
b
)
{
short
c
=
1
;
unsigned
d
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
for
(
b
=
1
;
b
<
10
;
b
+=
1
)
d
[
c
]
[
c
]
[
b
]
=
1
;
if
(
d
[
b
]
[
b
]
[
b
]
)
a
[
1
]
|=
b
;
return
b
;
}
