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
long
volatile
f1
;
}
const
g_159
;
int
main
(
)
{
transparent_crc
(
g_159
.
f1
)
;
}
