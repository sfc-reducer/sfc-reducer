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
func_1
,
g_84
)
{
printf
(
"checksum = %x\n"
,
func_1
)
;
}
int
*
*
g_84
;
unsigned
func_15
(
char
,
int
)
;
unsigned
char
func_24
(
unsigned
)
;
char
func_94
(
int
*
,
int
,
int
*
const
*
,
char
,
int
*
)
;
int
func_1
(
)
{
return
func_15
(
crc32_context
,
crc32_context
)
;
}
unsigned
func_15
(
char
crc32_context
,
int
g_202
)
{
func_24
(
crc32_context
)
;
return
g_202
;
}
unsigned
char
func_24
(
unsigned
g_202
)
{
int
*
l_42
=
&
g_202
;
func_94
(
&
crc32_context
,
*
l_42
,
g_84
,
g_202
,
&
crc32_context
)
;
return
g_202
;
}
char
func_94
(
int
*
p_95
,
int
crc32_context
,
int
*
const
*
g_202
,
char
func_94
,
int
*
p_99
)
{
unsigned
l_100
=
0x8A1D584DL
;
int
*
*
l_113
=
&
p_99
;
*
p_99
=
l_100
^
p_95
==
*
l_113
;
return
l_100
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
