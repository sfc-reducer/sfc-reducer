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
g_53
;
int
main
(
)
{
transparent_crc
(
g_53
.
f1
)
;
}
