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
S0
{
volatile
long
f6
;
}
;
union
{
struct
S0
f0
;
}
const
g_158
;
int
main
(
)
{
transparent_crc
(
g_158
.
f0
.
f6
)
;
}
