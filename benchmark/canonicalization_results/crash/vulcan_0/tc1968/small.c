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
struct
{
long
volatile
f1
;
}
const
g_188
;
int
main
(
)
{
transparent_crc
(
g_188
.
f1
)
;
}
