typedef
char
int8_t
;
typedef
unsigned
uint64_t
;
void
platform_main_end
(
uint64_t
crc
,
int
flag
)
{
printf
(
"checksum = %X\n"
,
crc
)
;
}
uint64_t
safe_add_func_uint64_t_u_u
(
int8_t
ui1
,
uint64_t
ui2
)
{
return
ui1
+
ui2
;
}
uint64_t
crc32_context
;
void
crc32_byte
(
b
)
{
crc32_context
=
b
;
}
void
transparent_crc
(
uint64_t
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
crc32_byte
(
val
)
;
}
uint64_t
g_1729
[
1
]
[
4
]
;
int8_t
func_12
(
int8_t
,
int8_t
)
;
uint64_t
func_22
(
uint64_t
,
uint64_t
,
int8_t
,
uint64_t
,
int8_t
)
;
int8_t
func_32
(
int8_t
,
int8_t
,
uint64_t
,
int8_t
)
;
uint64_t
func_1
(
)
{
return
func_12
(
crc32_context
,
crc32_context
)
;
}
int8_t
func_12
(
int8_t
p_13
,
int8_t
p_14
)
{
return
func_22
(
crc32_context
,
crc32_context
,
crc32_context
,
18446744073709551613UL
,
crc32_context
)
;
}
uint64_t
func_22
(
uint64_t
p_23
,
uint64_t
p_24
,
int8_t
p_25
,
uint64_t
p_26
,
int8_t
p_27
)
{
return
func_32
(
6
,
crc32_context
,
1
,
crc32_context
)
;
}
int8_t
func_32
(
int8_t
p_33
,
int8_t
p_34
,
uint64_t
p_35
,
int8_t
p_36
)
{
for
(
;
crc32_context
<
51
;
++
crc32_context
)
p_35
=
safe_add_func_uint64_t_u_u
(
g_1729
[
0
]
[
3
]
=
p_35
,
3
)
;
return
3
;
}
int
main
(
)
{
int
i
,
j
;
func_1
(
)
;
for
(
i
=
0
;
i
<
1
;
i
++
)
for
(
j
=
0
;
j
<
4
;
j
++
)
transparent_crc
(
g_1729
[
i
]
[
j
]
,
"g_1729[i][j]"
,
j
)
;
platform_main_end
(
crc32_context
,
j
)
;
return
0
;
}
