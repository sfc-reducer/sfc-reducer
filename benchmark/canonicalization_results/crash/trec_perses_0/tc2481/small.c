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
union
a
{
volatile
long
a
;
}
;
static
union
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
b
(
a
)
;
}
