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
a
;
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
unsigned
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
volatile
struct
b
a
;
struct
a
b
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
