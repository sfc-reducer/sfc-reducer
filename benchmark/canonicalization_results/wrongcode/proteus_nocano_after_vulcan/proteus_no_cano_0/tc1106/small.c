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
x
)
;
}
int
l_1198
=
0xDB22C08FL
;
static
const
int
*
g_295
=
&
l_1198
;
int
func_22
(
)
;
unsigned
func_26
(
short
,
char
,
short
,
short
,
unsigned
)
;
unsigned
func_1
(
)
{
func_22
(
)
;
return
7
;
}
int
func_22
(
crc32_context
)
{
int
*
l_1380
=
&
l_1198
;
*
l_1380
=
func_26
(
*
g_295
,
crc32_context
,
crc32_context
,
crc32_context
,
crc32_context
)
;
return
*
g_295
;
}
unsigned
func_26
(
short
p_27
,
char
p_28
,
short
p_29
,
short
p_30
,
unsigned
p_31
)
{
int
*
l_1197
=
&
l_1198
;
int
*
l_1198
=
&
crc32_context
;
*
l_1197
=
0
;
if
(
*
g_295
)
++
*
l_1198
;
return
p_31
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
crc32_context
)
;
return
0
;
}
