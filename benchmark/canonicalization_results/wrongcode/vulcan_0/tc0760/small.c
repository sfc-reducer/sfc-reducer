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
g_60
[
]
;
int
*
i
=
g_60
;
static
int
*
const
*
g_67
=
&
i
;
static
unsigned
val
;
short
func_1
(
)
{
int
l_1074
[
4
]
;
for
(
val
=
0
;
val
<=
6
;
val
+=
1
)
{
int
*
*
l_1298
=
&
i
;
*
l_1298
=
l_1074
;
*
*
g_67
=
val
;
}
return
val
;
}
int
main
(
)
{
int
i
=
func_1
(
)
;
for
(
val
=
0
;
val
<
2
;
val
++
)
transparent_crc
(
g_60
[
val
]
,
"g_60[i]"
,
val
)
;
platform_main_end
(
crc32_context
,
val
)
;
return
0
;
}
