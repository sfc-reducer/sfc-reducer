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
transparent_crc
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
x
,
val
)
{
printf
(
"checksum = %x\n"
,
crc32_context
)
;
}
struct
val
{
unsigned
val
;
}
;
struct
S1
{
struct
val
val
;
struct
val
crc32_context
;
}
val
;
struct
S1
g_71
=
{
9
}
;
unsigned
func_1
(
)
{
val
=
g_71
;
val
=
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
int
print_hash_value
=
func_1
(
)
;
transparent_crc
(
val
.
val
.
val
,
"g_29.f0.f0"
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
