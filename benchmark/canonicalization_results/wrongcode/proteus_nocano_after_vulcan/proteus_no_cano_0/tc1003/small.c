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
print_hash_value
)
{
printf
(
"checksum = %x\n"
,
print_hash_value
)
;
}
int
g_2
[
]
=
{
0x00025260L
}
;
int
g_13
=
0xF885EA6EL
;
unsigned
g_43
=
4294967295UL
;
char
g_63
=
4UL
;
unsigned
g_80
=
0x6FE6C8CEL
;
char
g_88
=
0xC73BE97BL
;
unsigned
g_161
=
4294967293UL
;
int
*
g_234
=
g_2
;
unsigned
g_602
[
2
]
[
7
]
=
{
0x81EBDE11L
}
;
unsigned
func_1
(
)
{
char
l_12
=
0x22L
;
++
g_2
[
l_12
]
;
return
*
g_234
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
