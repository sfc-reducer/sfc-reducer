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
func_60
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
g_4
)
{
printf
(
"checksum = %x\n"
,
g_4
)
;
}
struct
func_60
{
int
f0
;
int
crc32_context
;
short
f3
;
unsigned
func_60
;
}
;
struct
crc32_context
{
struct
func_60
f0
;
}
;
char
g_4
;
struct
func_60
g_83
;
char
*
func_25
(
unsigned
,
char
*
)
;
struct
crc32_context
func_60
(
short
,
unsigned
)
;
struct
crc32_context
func_1
(
)
{
char
*
l_10
=
&
g_4
;
struct
crc32_context
l_1600
=
{
0x612E5C0EL
}
;
func_25
(
g_4
,
l_10
)
;
return
l_1600
;
}
char
*
func_25
(
unsigned
p_26
,
char
*
p_27
)
{
func_60
(
g_4
,
g_4
)
;
return
func_1
;
}
struct
crc32_context
func_60
(
short
p_61
,
unsigned
p_62
)
{
struct
func_60
l_81
=
{
0x584DF831L
}
;
struct
func_60
*
func_60
=
&
g_83
;
struct
crc32_context
l_295
=
{
0L
}
;
*
func_60
=
l_81
;
*
func_60
=
*
func_60
;
short
*
l_202
=
&
l_81
.
f3
;
short
*
*
crc32_context
[
]
=
{
&
l_202
}
;
return
l_295
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
g_83
.
f0
,
"g_83.f0"
,
g_4
)
;
platform_main_end
(
g_4
,
crc32_context
)
;
return
0
;
}
