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
5
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
