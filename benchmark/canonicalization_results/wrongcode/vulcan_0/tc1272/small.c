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
si1
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
short
g_75
;
int
func_2
(
unsigned
short
,
unsigned
short
)
;
const
int
func_7
(
unsigned
)
;
const
unsigned
short
func_20
(
char
,
unsigned
char
)
;
char
func_37
(
int
)
;
int
func_1
(
)
{
func_2
(
g_75
,
g_75
)
;
return
g_75
;
}
int
func_2
(
unsigned
short
g_75
,
unsigned
short
func_37
)
{
unsigned
crc32_context
=
func_7
(
g_75
)
;
return
g_75
;
}
const
int
func_7
(
unsigned
g_75
)
{
func_20
(
1L
,
g_75
)
;
return
g_75
;
}
const
unsigned
short
func_20
(
char
crc32_context
,
unsigned
char
func_7
)
{
for
(
;
g_75
!=
4
;
--
g_75
)
func_37
(
g_75
)
;
return
g_75
;
}
char
func_37
(
g_75
)
{
unsigned
func_7
=
crc32_context
=
g_75
;
return
g_75
;
}
int
main
(
)
{
int
g_75
=
func_1
(
)
;
platform_main_end
(
crc32_context
,
g_75
)
;
return
0
;
}
