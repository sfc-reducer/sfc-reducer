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
safe_add_func_int32_t_s_s
(
si1
,
crc32_context
)
{
return
si1
+
si1
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
union
U0
{
int
f0
;
}
;
int
*
g_349
;
int
*
*
g_348
=
&
g_349
;
union
U0
g_389
;
unsigned
char
func_8
(
unsigned
,
unsigned
short
,
int
,
int
*
)
;
unsigned
short
func_41
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
func_1
(
)
{
int
*
l_2
=
&
crc32_context
;
func_8
(
crc32_context
,
*
l_2
,
safe_add_func_int32_t_s_s
(
&
crc32_context
==
l_2
,
7UL
)
,
&
crc32_context
)
;
return
g_389
.
f0
;
}
unsigned
char
func_8
(
unsigned
l_2
,
unsigned
short
crc32_context
,
int
p_11
,
int
*
si1
)
{
int
*
g_349
=
*
g_348
=
&
p_11
;
func_41
(
crc32_context
,
g_349
,
&
g_349
)
;
return
crc32_context
;
}
unsigned
short
func_41
(
unsigned
short
g_349
,
int
*
si1
,
int
*
*
l_2
)
{
for
(
crc32_context
=
11
;
crc32_context
;
crc32_context
--
)
if
(
*
*
g_348
)
break
;
return
g_389
.
f0
;
}
int
main
(
)
{
int
g_349
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
