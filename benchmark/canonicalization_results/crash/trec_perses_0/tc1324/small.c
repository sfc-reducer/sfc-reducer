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
unsigned
a
:
1
;
}
;
struct
b
{
struct
a
a
;
int
b
;
}
;
static
struct
b
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
.
a
)
;
}
