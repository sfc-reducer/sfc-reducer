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
x
)
;
}
const
unsigned
short
func_61
(
unsigned
short
,
char
,
unsigned
)
;
unsigned
func_1
(
)
{
char
l_73
=
0x66L
;
int
*
l_123
=
&
crc32_context
;
func_61
(
l_73
,
l_73
,
l_73
)
;
return
*
l_123
;
}
const
unsigned
short
func_61
(
unsigned
short
p_62
,
char
func_61
,
unsigned
p_64
)
{
int
*
l_73
=
&
crc32_context
;
crc32_context
=
-
(
&
crc32_context
==
l_73
)
;
return
*
l_73
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
