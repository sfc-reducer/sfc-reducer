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
char
a
;
int
b
;
short
c
;
unsigned
d
;
}
;
union
b
{
volatile
unsigned
a
:
1
;
struct
a
b
;
}
;
static
union
b
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
