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
l_80
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
g_81
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
union
val
{
signed
f0
;
}
;
short
g_68
;
char
val
;
union
val
g_324
;
union
val
func_69
(
short
*
,
short
)
;
char
func_1
(
)
{
func_69
(
&
g_68
,
g_68
)
;
return
g_324
.
f0
;
}
union
val
func_69
(
short
*
p_70
,
short
p_71
)
{
int
l_77
=
0x3BC9FC22L
;
char
*
crc32_context
=
&
val
;
l_77
^=
&
val
!=
crc32_context
;
*
crc32_context
=
l_77
;
return
g_324
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
,
"g_81"
,
val
)
;
platform_main_end
(
crc32_context
,
val
)
;
return
0
;
}
