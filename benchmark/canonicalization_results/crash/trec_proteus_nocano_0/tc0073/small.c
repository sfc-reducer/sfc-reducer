struct
a
{
short
a
;
}
;
unsigned
b
(
)
{
int
c
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
a
=
1
;
struct
a
d
;
for
(
;
d
.
a
<
9
;
d
.
a
+=
1
)
c
[
a
]
[
a
]
[
d
.
a
]
=
1
;
b
(
c
)
;
return
a
;
}
