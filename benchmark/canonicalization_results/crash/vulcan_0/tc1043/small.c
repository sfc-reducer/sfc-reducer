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
union
{
volatile
long
f0
;
}
const
g_406
;
int
main
(
)
{
transparent_crc
(
g_406
.
f0
)
;
}
