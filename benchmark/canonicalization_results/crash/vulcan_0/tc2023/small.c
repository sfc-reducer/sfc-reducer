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
g_76
;
int
main
(
)
{
transparent_crc
(
g_76
.
f2
)
;
}
