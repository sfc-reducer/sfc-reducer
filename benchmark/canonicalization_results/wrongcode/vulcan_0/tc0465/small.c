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
int
*
g_50
=
&
crc32_context
;
int
crc32_context
=
0x8F24B120L
;
static
const
int
*
g_329
=
&
crc32_context
;
int
*
*
g_380
;
static
int
*
g_1878
=
&
crc32_context
;
unsigned
func_7
(
short
,
char
,
unsigned
short
,
unsigned
,
int
)
;
int
func_21
(
int
,
unsigned
char
,
unsigned
char
,
int
)
;
int
func_1
(
)
{
int
*
*
*
l_1888
=
&
g_380
;
*
g_50
=
crc32_context
||
func_21
(
0UL
,
crc32_context
,
crc32_context
,
crc32_context
)
;
func_7
(
crc32_context
,
crc32_context
,
crc32_context
,
*
*
*
l_1888
,
crc32_context
)
;
return
crc32_context
;
}
unsigned
func_7
(
short
p_8
,
char
p_9
,
unsigned
short
crc32_context
,
unsigned
func_7
,
int
func_21
)
{
const
int
*
*
l_2001
=
&
g_329
;
*
g_1878
=
0
;
*
g_1878
=
*
*
l_2001
;
return
crc32_context
;
}
int
func_21
(
int
crc32_context
,
unsigned
char
func_7
,
unsigned
char
func_21
,
int
g_1878
)
{
return
*
g_329
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
