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
signed
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
flag
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
short
g_85
;
short
g_91
;
short
*
g_359
=
&
g_85
;
unsigned
short
g_460
;
unsigned
func_18
(
short
,
int
,
unsigned
,
unsigned
)
;
unsigned
func_1
(
)
{
short
l_640
=
0x2709L
;
lbl_667
:
;
if
(
func_18
(
*
g_359
,
g_460
,
crc32_context
,
crc32_context
)
<=
l_640
)
{
unsigned
short
*
l_666
=
&
g_460
;
*
l_666
=
l_640
;
}
else
goto
lbl_667
;
return
crc32_context
;
}
unsigned
func_18
(
short
p_19
,
int
p_20
,
unsigned
p_21
,
unsigned
p_22
)
{
unsigned
short
*
l_431
=
&
g_91
;
*
l_431
=
!
crc32_context
;
if
(
crc32_context
)
{
unsigned
short
*
l_459
=
&
g_460
;
*
l_459
=
++
*
l_431
;
}
return
*
l_431
;
}
int
main
(
argc
)
{
func_1
(
)
;
transparent_crc
(
g_91
,
"g_91"
,
crc32_context
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
