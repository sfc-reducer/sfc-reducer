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
f1
;
}
const
g_330
;
int
main
(
)
{
transparent_crc
(
g_330
.
f1
)
;
}
