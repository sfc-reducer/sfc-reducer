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
char
a
;
short
b
;
short
c
;
struct
a
d
;
char
e
;
}
;
struct
c
{
volatile
struct
b
a
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
a
.
d
.
a
)
;
}
