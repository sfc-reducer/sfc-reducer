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
g_29
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
char
val
=
0x3FL
;
char
func_15
(
unsigned
short
)
;
int
p_33
(
unsigned
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
func_15
(
val
)
;
return
crc32_context
;
}
char
func_15
(
unsigned
short
p_16
)
{
int
*
l_28
[
]
[
3
]
=
{
{
&
crc32_context
}
,
&
crc32_context
,
&
crc32_context
,
&
crc32_context
}
;
unsigned
l_380
=
p_33
(
0L
,
(
&
crc32_context
==
l_28
[
1
]
[
2
]
)
<
val
,
l_28
[
1
]
[
2
]
)
;
return
crc32_context
;
}
int
p_33
(
unsigned
p_31
,
char
p_32
,
int
*
p_33
)
{
if
(
printf
==
p_33
^
p_32
)
for
(
;
val
;
--
val
)
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
p_33
=
func_1
(
)
;
transparent_crc
(
val
,
"g_147"
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
