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
short
safe_add_func_int16_t_s_s
(
si1
,
si2
)
{
return
si1
&&
si1
>
32767
-
si2
||
si1
&&
si2
&&
si1
;
}
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
flag
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
si1
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
struct
si1
{
int
f3
;
}
;
struct
si1
g_19
;
struct
si1
g_46
[
]
[
2
]
;
int
*
g_74
[
]
=
{
&
g_19
.
f3
}
;
int
si1
=
0x94F36023L
;
static
const
int
*
g_402
=
&
si1
;
static
int
*
g_449
=
&
si1
;
int
func_11
(
struct
si1
,
struct
si1
,
struct
si1
)
;
struct
si1
func_15
(
unsigned
,
struct
si1
,
unsigned
)
;
int
*
func_26
(
const
int
*
)
;
unsigned
func_1
(
)
{
if
(
0xB143E95AL
==
func_11
(
func_15
(
4
,
g_19
,
g_19
.
f3
)
,
g_46
[
9
]
[
1
]
,
g_19
)
)
;
else
*
g_449
=
*
g_402
;
return
*
g_449
;
}
int
func_11
(
struct
si1
g_19
,
struct
si1
p_13
,
struct
si1
p_14
)
{
si1
=
0
;
func_26
(
g_449
)
;
return
g_19
.
f3
;
}
struct
si1
func_15
(
unsigned
p_16
,
struct
si1
p_17
,
unsigned
p_18
)
{
return
g_19
;
}
int
*
func_26
(
const
int
*
p_27
)
{
*
*
g_74
=
safe_add_func_int16_t_s_s
(
*
g_449
,
g_74
!=
printf
)
;
return
g_449
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
si1
,
"g_151"
,
si1
)
;
platform_main_end
(
crc32_context
,
si1
)
;
return
0
;
}
