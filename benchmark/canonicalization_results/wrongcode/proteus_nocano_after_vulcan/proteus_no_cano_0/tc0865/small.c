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
x
;
const
int
*
g_5
;
char
g_102
;
unsigned
*
g_204
=
&
crc32_context
;
const
int
*
*
g_239
=
&
g_5
;
char
g_330
;
static
const
int
*
g_435
=
&
x
;
unsigned
short
func_46
(
short
,
char
)
;
int
l_518
(
unsigned
short
,
const
int
*
,
unsigned
short
,
short
*
)
;
short
func_1
(
)
{
short
l_762
;
func_46
(
*
g_204
=
l_518
(
g_330
,
*
g_239
,
g_102
,
&
l_762
)
,
g_330
)
;
return
g_102
;
}
unsigned
short
func_46
(
short
x
,
char
crc32_context
)
{
short
*
l_638
=
&
x
;
l_518
(
g_102
,
*
g_239
,
g_102
,
l_638
)
;
return
g_102
;
}
int
l_518
(
unsigned
short
p_63
,
const
int
*
p_64
,
unsigned
short
p_65
,
short
*
p_66
)
{
int
*
l_518
=
&
x
;
*
l_518
=
0x6136L
;
return
*
g_435
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
platform_main_end
(
crc32_context
,
g_102
)
;
return
0
;
}
