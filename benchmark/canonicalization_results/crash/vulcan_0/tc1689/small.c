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
f6
;
}
const
g_206
;
int
main
(
)
{
transparent_crc
(
g_206
.
f6
)
;
}
