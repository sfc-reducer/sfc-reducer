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
g_66
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
func_1
)
{
printf
(
"checksum = %x\n"
,
func_1
)
;
}
struct
crc32_context
{
int
val
;
long
crc32_context
;
}
;
struct
crc32_context
val
=
{
0xF30CC2FDL
}
;
struct
crc32_context
g_66
;
int
func_4
(
char
)
;
static
struct
crc32_context
func_54
(
unsigned
,
long
long
)
;
struct
crc32_context
func_1
(
)
{
struct
crc32_context
*
l_2
=
&
g_66
;
func_4
(
sizeof
g_66
)
;
return
*
l_2
;
}
int
func_4
(
char
p_5
)
{
int
*
l_33
=
&
crc32_context
;
func_54
(
sizeof
g_66
,
*
l_33
)
;
return
g_66
.
val
;
}
struct
crc32_context
func_54
(
unsigned
p_55
,
long
long
p_56
)
{
struct
crc32_context
*
crc32_context
=
&
g_66
;
*
crc32_context
=
val
;
*
crc32_context
=
*
crc32_context
;
return
*
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
g_66
.
val
,
"g_66.f0"
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
