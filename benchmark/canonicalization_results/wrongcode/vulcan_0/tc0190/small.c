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
safe_add_func_uint32_t_u_u
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
platform_main_end
(
ui2
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
ui2
=
&
crc32_context
;
long
long
*
g_361
[
]
;
int
*
*
func_27
(
unsigned
long
long
,
unsigned
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
l_908
=
&
ui2
;
long
long
*
*
l_920
=
g_361
;
for
(
;
crc32_context
<
22
;
crc32_context
=
safe_add_func_uint32_t_u_u
(
crc32_context
,
1
)
)
;
func_27
(
(
g_361
==
l_920
)
>=
*
*
l_908
,
*
ui2
)
;
return
crc32_context
;
}
int
*
*
func_27
(
unsigned
long
long
p_28
,
unsigned
printf
)
{
if
(
p_28
)
for
(
;
crc32_context
;
crc32_context
-=
1
)
;
return
ui2
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
