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
g_263
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
g_262
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
S0
{
unsigned
val
;
}
;
struct
val
{
long
f1
;
struct
S0
val
;
}
f1
;
struct
val
*
val
=
&
f1
;
struct
val
g_845
=
{
0x48C56A86L
}
;
unsigned
func_1
(
)
{
*
val
=
g_845
;
*
val
=
*
val
;
return
2
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
f1
.
f1
,
"g_263.f1"
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
