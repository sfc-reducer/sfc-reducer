short
a
;
void
b
(
c
)
{
a
+=
c
;
}
struct
{
volatile
unsigned
d
;
}
static
d
[
1
]
;
int
main
(
)
{
int
c
;
for
(
c
=
0
;
c
<
1
;
c
++
)
b
(
d
[
c
]
.
d
)
;
}
