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
g_93
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
i
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
crc32_context
=
0x3FE74C19L
;
static
const
int
*
g_138
=
&
crc32_context
;
unsigned
char
*
*
g_374
;
int
*
func_7
(
int
*
,
unsigned
,
long
long
,
int
*
)
;
unsigned
short
val
(
char
,
int
*
,
unsigned
long
long
)
;
unsigned
func_1
(
)
{
int
*
l_672
[
1
]
;
int
val
;
for
(
val
=
0
;
val
<
1
;
val
++
)
l_672
[
val
]
=
&
crc32_context
;
func_7
(
0
,
*
g_138
,
*
*
l_672
,
l_672
[
0
]
)
;
return
val
;
}
int
*
func_7
(
int
*
p_8
,
unsigned
p_9
,
long
long
p_10
,
int
*
p_11
)
{
unsigned
char
*
*
*
l_678
=
&
g_374
;
*
p_11
&=
l_678
!=
&
g_374
;
val
(
crc32_context
,
p_11
,
crc32_context
)
;
return
val
;
}
unsigned
short
val
(
char
p_47
,
int
*
p_48
,
unsigned
long
long
p_49
)
{
*
p_48
=
*
g_138
;
return
crc32_context
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
crc32_context
,
"g_594"
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
