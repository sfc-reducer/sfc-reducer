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
static
unsigned
g_3
=
5UL
;
char
x
;
char
*
p_57
=
&
x
;
char
*
*
g_86
=
&
p_57
;
char
func_54
(
unsigned
,
unsigned
char
,
int
*
,
char
)
;
unsigned
func_1
(
)
{
int
*
x
=
&
crc32_context
;
func_54
(
*
x
,
*
x
,
x
,
*
*
g_86
)
;
return
*
x
;
}
char
func_54
(
unsigned
x
,
unsigned
char
func_54
,
int
*
p_57
,
char
platform_main_end
)
{
int
*
*
l_65
=
&
p_57
;
*
p_57
=
*
l_65
==
&
crc32_context
|
g_3
;
return
x
;
}
int
main
(
)
{
int
x
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
