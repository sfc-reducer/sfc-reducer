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
unsigned
b
;
volatile
struct
a
c
;
int
d
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
c
.
a
)
;
}
