struct
a
{
short
a
;
unsigned
b
;
unsigned
c
:
1
;
}
;
struct
b
{
volatile
struct
a
a
;
char
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
a
.
c
)
;
}
