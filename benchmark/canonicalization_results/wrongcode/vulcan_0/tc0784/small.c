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
g_385
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
x
=
&
crc32_context
;
const
unsigned
char
g_182
=
247UL
;
char
*
g_385
=
&
g_182
;
char
*
*
g_384
=
&
g_385
;
unsigned
short
func_31
(
unsigned
,
unsigned
char
)
;
unsigned
func_34
(
int
*
,
unsigned
char
,
int
,
int
*
)
;
char
func_1
(
)
{
int
*
*
l_67
=
&
x
;
func_31
(
func_34
(
*
l_67
,
crc32_context
,
crc32_context
,
x
)
,
crc32_context
)
;
return
*
g_385
;
}
unsigned
short
func_31
(
unsigned
crc32_context
,
unsigned
char
g_385
)
{
*
x
=
*
*
g_384
<
g_182
;
return
crc32_context
;
}
unsigned
func_34
(
int
*
x
,
unsigned
char
crc32_context
,
int
g_385
,
int
*
func_34
)
{
return
crc32_context
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
x
)
;
return
0
;
}
