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
;
signed
b
;
unsigned
:
1
;
unsigned
c
;
volatile
unsigned
d
:
1
;
}
;
static
struct
a
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
d
)
;
}
