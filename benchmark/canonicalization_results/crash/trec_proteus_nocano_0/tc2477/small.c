struct
a
{
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
int
a
;
unsigned
b
;
volatile
struct
a
c
;
}
;
struct
c
{
unsigned
a
;
short
b
;
struct
b
c
;
}
;
static
struct
c
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
c
.
c
.
a
)
;
}
