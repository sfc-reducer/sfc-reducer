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
f2
;
}
const
g_103
;
int
main
(
)
{
transparent_crc
(
g_103
.
f2
)
;
}
