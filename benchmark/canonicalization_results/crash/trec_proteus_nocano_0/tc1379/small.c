struct
a
{
short
a
;
unsigned
b
;
short
c
;
signed
d
:
26
;
}
;
struct
b
{
char
a
;
volatile
struct
a
b
;
}
;
static
struct
b
a
;
int
main
(
)
{
main
(
a
.
b
.
d
)
;
}
