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
g_87
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
union
crc32_context
{
char
val
;
}
;
int
g_14
=
0x28D5FEAFL
;
int
g_61
[
]
[
5
]
[
6
]
;
static
int
*
val
=
&
g_61
[
3
]
[
3
]
[
3
]
;
short
func_25
(
)
;
short
func_30
(
union
crc32_context
,
unsigned
short
,
unsigned
short
,
const
char
*
,
char
)
;
union
crc32_context
func_36
(
int
*
,
union
crc32_context
,
unsigned
)
;
int
*
func_40
(
int
,
union
crc32_context
,
unsigned
,
unsigned
,
unsigned
char
)
;
char
func_57
(
int
*
)
;
unsigned
func_1
(
)
{
unsigned
crc32_context
=
func_25
(
)
;
return
crc32_context
;
}
short
func_25
(
union
crc32_context
val
)
{
int
*
l_59
=
&
g_14
;
char
*
l_142
=
l_142
;
unsigned
crc32_context
=
func_30
(
func_36
(
func_40
(
0
,
val
,
func_57
(
l_59
)
,
g_14
,
val
.
val
)
,
val
,
1
)
,
*
l_59
,
val
.
val
,
l_142
,
val
.
val
)
;
return
crc32_context
;
}
short
func_30
(
union
crc32_context
p_31
,
unsigned
short
p_32
,
unsigned
short
p_33
,
const
char
*
p_34
,
char
p_35
)
{
func_57
(
val
)
;
return
2
;
}
union
crc32_context
func_36
(
int
*
p_37
,
union
crc32_context
p_38
,
unsigned
p_39
)
{
return
p_38
;
}
int
*
func_40
(
int
p_41
,
union
crc32_context
p_42
,
unsigned
p_43
,
unsigned
p_44
,
unsigned
char
p_45
)
{
return
func_57
;
}
char
func_57
(
int
*
p_58
)
{
int
*
l_60
=
&
g_61
[
3
]
[
3
]
[
3
]
;
*
l_60
=
*
p_58
;
for
(
crc32_context
=
0
;
crc32_context
;
)
func_1
(
)
;
return
1
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
val
[
crc32_context
]
,
"g_81[i]"
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
