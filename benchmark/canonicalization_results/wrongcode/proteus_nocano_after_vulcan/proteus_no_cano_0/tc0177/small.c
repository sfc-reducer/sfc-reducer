signed
printf
(
const
char
*
,
...
)
;
int
crc32_context
;
void
transparent_crc
(
unsigned
val
,
char
*
vname
,
int
f0
)
{
crc32_context
+=
val
;
}
void
platform_main_end
(
func_1
,
l_473
)
{
printf
(
"checksum = %x\n"
,
l_473
)
;
}
struct
val
{
unsigned
x
;
unsigned
:
16
;
signed
crc32_context
;
}
x
;
struct
val
g_471
=
{
134
}
;
static
int
func_1
(
)
{
struct
val
*
val
=
&
x
;
*
val
=
g_471
;
*
val
=
*
val
;
return
crc32_context
;
}
int
main
(
)
{
func_1
(
)
;
transparent_crc
(
x
.
x
,
"g_159.f0"
,
crc32_context
)
;
platform_main_end
(
crc32_context
,
crc32_context
)
;
return
0
;
}
