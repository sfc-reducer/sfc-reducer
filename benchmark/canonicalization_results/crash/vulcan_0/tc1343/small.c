signed
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
S2
{
volatile
long
f0
;
}
;
union
{
struct
S2
f0
;
}
const
g_265
;
int
main
(
)
{
transparent_crc
(
g_265
.
f0
.
f0
)
;
}
