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
l_1109
)
{
crc32_context
+=
l_1109
;
}
void
platform_main_end
(
x
,
l_1109
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
{
unsigned
f0
;
}
g_82
[
]
[
8
]
[
1
]
;
char
g_142
;
unsigned
*
g_475
[
]
=
{
&
g_82
[
1
]
[
2
]
[
0
]
.
f0
}
;
unsigned
long
long
*
l_1109
;
unsigned
long
long
*
*
g_1103
;
char
func_6
(
unsigned
,
unsigned
,
unsigned
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
func_6
(
g_142
,
g_142
,
2
,
*
*
g_475
)
;
return
*
*
g_475
;
}
char
func_6
(
unsigned
p_7
,
unsigned
p_8
,
unsigned
short
p_9
,
unsigned
crc32_context
)
{
unsigned
long
long
*
*
l_1100
[
]
[
3
]
[
4
]
=
{
{
&
l_1109
}
,
{
&
l_1109
}
,
&
l_1109
,
&
l_1109
,
&
l_1109
,
&
l_1109
}
;
char
*
l_1109
=
&
g_142
;
if
(
*
l_1109
=
p_9
>
(
l_1100
[
2
]
[
0
]
[
3
]
==
(
g_1103
=
l_1100
[
2
]
[
0
]
[
3
]
)
)
)
{
}
return
*
*
g_475
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
transparent_crc
(
g_142
,
"g_142"
,
g_142
)
;
platform_main_end
(
crc32_context
,
g_142
)
;
return
0
;
}
