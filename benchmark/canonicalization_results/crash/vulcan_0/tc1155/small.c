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
long
volatile
f2
;
}
const
g_233
;
int
main
(
)
{
transparent_crc
(
g_233
.
f2
)
;
}
