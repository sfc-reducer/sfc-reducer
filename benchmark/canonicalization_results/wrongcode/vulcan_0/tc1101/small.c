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
print_hash_value
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
g_153
=
&
crc32_context
;
int
*
*
g_893
=
&
g_153
;
static
unsigned
char
func_17
(
)
;
int
*
func_21
(
int
*
,
unsigned
,
unsigned
long
long
,
unsigned
char
)
;
int
*
func_39
(
short
)
;
unsigned
func_1
(
)
{
unsigned
l_1988
=
func_17
(
g_153
,
func_21
(
g_153
,
crc32_context
,
crc32_context
,
crc32_context
)
,
g_153
)
;
return
crc32_context
;
}
unsigned
char
func_17
(
int
*
p_18
,
int
*
p_19
,
int
*
p_20
)
{
int
func_17
;
unsigned
printf
;
int
*
func_39
;
int
func_21
;
int
*
l_1461
=
&
func_17
;
*
g_153
=
*
l_1461
;
int
g_153
;
*
g_893
=
l_1461
;
return
crc32_context
;
}
int
*
func_21
(
int
*
p_22
,
unsigned
p_23
,
unsigned
long
long
p_24
,
unsigned
char
p_25
)
{
func_39
(
crc32_context
)
;
return
g_153
;
}
int
*
func_39
(
short
p_40
)
{
*
g_153
|=
6L
;
return
&
crc32_context
;
}
int
main
(
)
{
int
crc32_context
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
