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
safe_add_func_uint8_t_u_u
(
ui1
,
ui2
)
{
return
ui1
+
ui2
;
}
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
p_41
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
l_1178
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
g_9
=
0xB0815898L
;
int
*
g_69
;
unsigned
l_1178
;
int
func_5
(
short
)
;
unsigned
func_13
(
unsigned
short
,
int
*
,
int
*
*
)
;
unsigned
short
func_37
(
int
*
,
int
,
int
*
*
,
int
*
,
int
*
*
)
;
unsigned
func_1
(
)
{
int
*
l_1178
=
&
crc32_context
;
int
*
*
l_1179
=
&
l_1178
;
*
l_1178
=
func_5
(
1
)
;
return
*
*
l_1179
;
}
int
func_5
(
short
p_6
)
{
func_13
(
0
,
&
g_9
,
&
g_69
)
;
return
l_1178
;
}
unsigned
func_13
(
unsigned
short
p_14
,
int
*
p_15
,
int
*
*
p_16
)
{
for
(
l_1178
=
0
;
l_1178
<=
50
;
l_1178
=
safe_add_func_uint8_t_u_u
(
l_1178
,
8
)
)
func_37
(
&
crc32_context
,
l_1178
,
&
g_69
,
&
g_9
,
&
g_69
)
;
return
l_1178
;
}
unsigned
short
func_37
(
int
*
p_38
,
int
p_39
,
int
*
*
p_40
,
int
*
l_1178
,
int
*
*
p_42
)
{
if
(
crc32_context
)
*
p_38
=
*
l_1178
;
else
*
p_40
=
l_1178
;
return
*
l_1178
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
g_9
,
"g_9"
,
l_1178
)
;
platform_main_end
(
crc32_context
,
l_1178
)
;
return
0
;
}
