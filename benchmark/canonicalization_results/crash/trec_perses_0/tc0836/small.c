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
volatile
signed
a
:
1
;
}
;
static
struct
a
c
[
1
]
;
int
main
(
)
{
for
(
a
=
0
;
a
<
1
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
