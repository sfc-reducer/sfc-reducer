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
volatile
long
f0
;
}
const
g_81
;
int
main
(
)
{
transparent_crc
(
g_81
.
f0
)
;
}
