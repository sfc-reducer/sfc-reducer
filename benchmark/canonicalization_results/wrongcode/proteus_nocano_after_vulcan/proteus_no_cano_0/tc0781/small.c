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
crc32_context
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
crc32_context
{
short
f0
;
short
crc32_context
;
char
l_681
;
}
g_65
;
void
*
g_99
;
int
val
(
unsigned
,
int
)
;
unsigned
func_1
(
)
{
return
val
(
crc32_context
,
crc32_context
)
;
}
int
val
(
unsigned
p_3
,
int
p_4
)
{
struct
crc32_context
transparent_crc
=
{
1L
}
;
struct
crc32_context
*
val
=
&
g_65
;
*
val
=
transparent_crc
;
*
val
=
*
val
;
void
*
l_740
=
&
transparent_crc
;
g_99
=
l_740
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
g_65
.
f0
,
"g_65.f2"
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
