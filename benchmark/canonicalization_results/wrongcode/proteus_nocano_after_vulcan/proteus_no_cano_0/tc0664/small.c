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
flag
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
char
f0
;
int
crc32_context
;
unsigned
g_138
;
}
;
struct
crc32_context
f0
=
{
2UL
}
;
static
struct
crc32_context
*
g_147
=
&
f0
;
struct
crc32_context
g_637
;
int
*
func_5
(
unsigned
,
unsigned
char
,
unsigned
short
,
unsigned
,
short
)
;
unsigned
char
func_11
(
unsigned
short
)
;
int
func_1
(
)
{
int
*
l_3
=
&
crc32_context
;
func_5
(
*
l_3
,
func_11
(
crc32_context
)
,
sizeof
g_637
,
*
l_3
,
*
l_3
)
;
return
sizeof
g_637
;
}
int
*
func_5
(
unsigned
p_6
,
unsigned
char
p_7
,
unsigned
short
p_8
,
unsigned
p_9
,
short
p_10
)
{
*
g_147
=
*
g_147
;
return
func_1
;
}
unsigned
char
func_11
(
unsigned
short
p_12
)
{
*
g_147
=
g_637
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
f0
.
f0
,
"g_138.f0"
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
