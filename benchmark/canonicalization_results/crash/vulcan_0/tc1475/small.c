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
g_200
;
int
main
(
)
{
transparent_crc
(
g_200
.
f0
)
;
}
