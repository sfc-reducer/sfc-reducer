struct
S2
{
unsigned
f0
:
1
;
}
;
union
{
volatile
struct
S2
f1
;
}
const
g_260
[
]
[
9
]
;
float
main
(
)
{
int
i
;
for
(
i
=
0
;
;
)
main
(
g_260
[
i
]
[
i
]
.
f1
.
f0
)
;
}
