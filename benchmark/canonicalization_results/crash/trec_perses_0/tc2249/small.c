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
short
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
;
int
main
(
)
{
b
(
c
.
a
)
;
}
