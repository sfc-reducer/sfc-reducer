struct
a
{
volatile
unsigned
b
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
b
;
short
a
;
int
c
;
int
d
;
}
;
struct
{
struct
b
a
;
}
static
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
b
.
b
)
;
}
