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
g_139
;
int
*
*
g_370
;
int
func_2
(
unsigned
,
int
,
int
,
unsigned
char
,
unsigned
short
)
;
unsigned
char
func_29
(
int
,
unsigned
,
short
)
;
char
func_1
(
)
{
char
l_8
=
0x70L
;
int
*
*
*
l_466
=
&
g_370
;
if
(
func_2
(
l_8
,
func_29
(
crc32_context
,
crc32_context
,
0
)
,
l_8
,
crc32_context
,
0
)
)
for
(
crc32_context
=
8
;
crc32_context
>=
4
;
)
{
int
*
*
*
l_467
=
&
g_370
;
*
g_139
=
(
l_466
==
l_467
)
<
crc32_context
;
}
return
crc32_context
;
}
int
func_2
(
unsigned
crc32_context
,
int
p_4
,
int
p_5
,
unsigned
char
p_6
,
unsigned
short
p_7
)
{
return
crc32_context
;
}
unsigned
char
func_29
(
int
g_370
,
unsigned
func_29
,
short
p_32
)
{
int
*
l_8
=
g_139
=
&
crc32_context
;
return
*
g_139
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
