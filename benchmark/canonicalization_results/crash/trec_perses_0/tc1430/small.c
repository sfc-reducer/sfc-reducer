int
a
;
void
b
(
b
)
{
a
+=
b
;
}
struct
a
{
unsigned
a
:
1
;
}
;
const
volatile
struct
a
c
[
8
]
;
int
main
(
)
{
int
a
;
for
(
a
=
1
;
a
<
8
;
a
++
)
b
(
c
[
a
]
.
a
)
;
}
