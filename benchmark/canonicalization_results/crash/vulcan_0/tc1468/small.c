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
const
volatile
long
g_305
;
signed
main
(
)
{
transparent_crc
(
g_305
)
;
}
