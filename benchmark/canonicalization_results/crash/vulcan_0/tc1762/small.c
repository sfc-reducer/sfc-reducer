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
g_391
;
int
main
(
)
{
transparent_crc
(
g_391
.
f2
)
;
}
