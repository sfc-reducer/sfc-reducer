short
crc32_context
;
void
transparent_crc
(
val
)
{
crc32_context
+=
val
;
}
struct
{
signed
main
;
signed
transparent_crc
;
volatile
unsigned
f8
:
13
;
}
static
f8
[
2
]
;
int
main
(
)
{
int
val
;
for
(
val
=
0
;
val
<
2
;
val
++
)
transparent_crc
(
f8
[
val
]
.
f8
)
;
}
