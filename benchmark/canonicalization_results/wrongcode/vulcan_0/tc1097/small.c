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
g_75
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
print_hash_value
[
]
;
int
*
func_45
(
short
,
int
,
int
*
,
unsigned
)
;
short
func_61
(
char
,
unsigned
,
int
)
;
unsigned
func_65
(
)
;
int
func_1
(
)
{
func_45
(
*
print_hash_value
,
*
print_hash_value
,
&
crc32_context
,
crc32_context
)
;
return
*
print_hash_value
;
}
int
*
func_45
(
short
crc32_context
,
int
printf
,
int
*
print_hash_value
,
unsigned
func_45
)
{
func_61
(
0
!=
&
crc32_context
,
func_65
(
)
,
0
)
;
return
print_hash_value
;
}
short
func_61
(
char
crc32_context
,
unsigned
func_45
,
int
printf
)
{
char
*
l_104
=
&
crc32_context
;
char
*
l_105
=
&
crc32_context
;
if
(
crc32_context
>
(
(
l_104
==
l_105
)
<
func_65
(
)
)
)
*
print_hash_value
|=
crc32_context
;
return
4
;
}
unsigned
func_65
(
)
{
return
2
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
print_hash_value
)
;
return
0
;
}
