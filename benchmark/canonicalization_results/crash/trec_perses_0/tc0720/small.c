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
unsigned
b
;
}
;
const
volatile
struct
a
c
[
3
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
3
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
