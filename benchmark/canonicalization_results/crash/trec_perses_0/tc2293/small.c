union
a
{
volatile
int
a
;
}
;
char
a
[
]
;
static
union
a
b
[
1
]
[
1
]
;
unsigned
c
(
c
)
{
a
[
1
]
=
b
[
1
]
[
1
]
.
a
;
return
c
;
}
