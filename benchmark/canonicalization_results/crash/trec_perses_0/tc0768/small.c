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
signed
:
1
;
unsigned
a
;
signed
:
31
;
volatile
unsigned
b
:
10
;
}
;
struct
b
{
char
a
;
struct
a
b
;
}
;
struct
c
{
struct
b
a
;
}
;
static
struct
c
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
.
b
.
b
)
;
}
