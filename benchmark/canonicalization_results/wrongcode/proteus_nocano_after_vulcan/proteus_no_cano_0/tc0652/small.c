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
g_4
)
{
printf
(
"checksum = %x\n"
,
g_4
)
;
}
char
val
;
unsigned
char
g_84
;
int
*
func_44
(
char
,
unsigned
)
;
unsigned
func_5
(
)
{
func_44
(
crc32_context
,
1
)
;
return
crc32_context
;
}
int
*
func_44
(
char
p_45
,
unsigned
p_46
)
{
void
*
l_81
=
&
val
;
void
*
l_82
[
]
[
6
]
=
{
{
&
val
}
,
{
0
}
,
&
val
,
&
val
}
;
unsigned
char
*
l_88
=
&
g_84
;
g_84
=
l_81
==
l_82
[
2
]
[
1
]
,
++
*
l_88
;
return
func_5
;
}
int
main
(
)
{
func_5
(
)
;
platform_main_end
(
crc32_context
,
g_84
)
;
return
0
;
}
