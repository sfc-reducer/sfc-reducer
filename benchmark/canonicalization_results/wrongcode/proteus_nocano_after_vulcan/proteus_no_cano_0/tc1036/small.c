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
print_hash_value
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
func_1
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
g_39
=
1L
;
int
val
[
]
=
{
0x78356027L
}
;
int
vname
=
-
1L
;
int
func_1
(
)
{
return
++
val
[
vname
]
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
transparent_crc
(
g_39
,
"g_39"
,
g_39
)
;
platform_main_end
(
g_39
,
g_39
)
;
return
0
;
}
