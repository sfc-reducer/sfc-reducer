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
unsigned
safe_sub_func_uint32_t_u_u
(
ui1
,
ui2
)
{
return
--
ui1
;
}
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
char
g_62
;
short
g_88
;
int
*
func_36
(
short
,
unsigned
short
*
,
short
,
int
)
;
unsigned
short
func_45
(
unsigned
,
int
,
int
*
,
int
*
)
;
short
func_1
(
)
{
func_36
(
g_88
,
&
g_88
,
g_88
,
g_88
)
;
return
g_88
;
}
int
*
func_36
(
short
g_88
,
unsigned
short
*
g_62
,
short
func_36
,
int
p_40
)
{
func_45
(
crc32_context
,
0
,
&
crc32_context
,
&
crc32_context
)
;
return
func_1
;
}
unsigned
short
func_45
(
unsigned
p_46
,
int
p_47
,
int
*
p_48
,
int
*
p_49
)
{
char
*
l_90
=
&
g_62
;
char
*
*
l_89
=
&
l_90
;
char
*
l_91
=
&
g_62
;
unsigned
l_92
=
1UL
;
*
p_48
=
safe_sub_func_uint32_t_u_u
(
*
l_89
!=
l_91
,
l_92
)
;
return
l_92
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
g_88
,
crc32_context
)
;
return
0
;
}
