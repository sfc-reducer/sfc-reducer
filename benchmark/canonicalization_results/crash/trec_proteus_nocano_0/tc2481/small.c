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
union
a
{
volatile
long
a
;
}
;
static
union
a
c
[
1
]
;
int
main
(
)
{
b
(
c
->
a
)
;
}
