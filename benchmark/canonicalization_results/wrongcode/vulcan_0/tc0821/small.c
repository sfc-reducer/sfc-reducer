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
p_9
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
g_12
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
int
p_9
;
short
crc32_context
;
}
;
struct
val
g_11
=
{
0xC87A7525L
}
;
struct
val
val
;
unsigned
p_9
(
int
,
short
,
unsigned
)
;
struct
val
func_1
(
)
{
p_9
(
crc32_context
,
crc32_context
,
crc32_context
)
;
return
val
;
}
unsigned
p_9
(
int
p_7
,
short
p_8
,
unsigned
p_9
)
{
val
=
g_11
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
func_1
(
)
;
transparent_crc
(
val
.
p_9
,
"g_12.f0"
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
