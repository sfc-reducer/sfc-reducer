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
g_234
;
int
main
(
)
{
transparent_crc
(
g_234
.
f1
)
;
}
