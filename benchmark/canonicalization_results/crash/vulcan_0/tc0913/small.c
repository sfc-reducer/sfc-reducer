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
{
volatile
long
f0
;
}
const
g_42
;
int
main
(
)
{
transparent_crc
(
g_42
.
f0
)
;
}
