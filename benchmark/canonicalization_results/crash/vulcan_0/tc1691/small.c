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
f2
;
}
const
g_1338
;
int
main
(
)
{
transparent_crc
(
g_1338
.
f2
)
;
}
