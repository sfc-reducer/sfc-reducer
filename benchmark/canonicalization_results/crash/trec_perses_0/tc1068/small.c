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
signed
b
:
1
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
1
;
a
<
2
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
[
a
]
.
b
)
;
}
