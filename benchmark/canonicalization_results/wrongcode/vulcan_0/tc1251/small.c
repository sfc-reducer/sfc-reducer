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
l_137
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
l_58
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
*
val
;
long
long
vname
;
long
g_96
[
]
;
short
*
func_20
(
)
;
const
short
*
func_49
(
)
;
short
*
*
func_55
(
unsigned
long
long
,
unsigned
)
;
unsigned
func_1
(
)
{
func_20
(
)
;
return
*
g_96
;
}
short
*
func_20
(
)
{
func_49
(
)
;
return
val
;
}
const
short
*
func_49
(
)
{
short
*
*
l_54
[
]
[
2
]
[
10
]
=
{
{
0
}
,
{
{
&
val
}
,
&
val
}
}
;
int
crc32_context
=
3L
;
if
(
(
l_54
[
1
]
[
1
]
[
0
]
!=
func_55
(
crc32_context
,
crc32_context
)
^
crc32_context
)
<=
1
)
{
long
long
*
l_152
=
&
vname
;
*
l_152
=
crc32_context
;
}
return
val
;
}
short
*
*
func_55
(
unsigned
long
long
p_56
,
unsigned
p_57
)
{
short
*
*
vname
=
&
val
;
return
vname
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
vname
,
"g_78"
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
