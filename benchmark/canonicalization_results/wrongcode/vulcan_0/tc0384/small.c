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
unsigned
safe_add_func_uint32_t_u_u
(
ui1
,
ui2
)
{
return
ui2
+
ui2
;
}
int
crc32_context
;
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
struct
S0
{
short
crc32_context
;
}
;
char
func_13
(
unsigned
,
unsigned
short
,
unsigned
,
unsigned
short
,
struct
S0
)
;
unsigned
char
func_33
(
int
*
,
unsigned
,
int
*
,
unsigned
)
;
int
*
func_42
(
)
;
unsigned
func_1
(
)
{
struct
S0
l_278
[
2
]
;
func_13
(
5
,
crc32_context
,
crc32_context
,
crc32_context
,
l_278
[
1
]
)
;
return
crc32_context
;
}
char
func_13
(
unsigned
p_36
,
unsigned
short
S0
,
unsigned
ui2
,
unsigned
short
func_13
,
struct
S0
safe_add_func_uint32_t_u_u
)
{
func_33
(
func_42
(
)
,
crc32_context
,
&
crc32_context
,
crc32_context
)
;
return
crc32_context
;
}
unsigned
char
func_33
(
int
*
p_34
,
unsigned
p_35
,
int
*
S0
,
unsigned
p_37
)
{
int
*
*
l_116
[
7
]
;
*
S0
=
safe_add_func_uint32_t_u_u
(
crc32_context
,
(
*
l_116
=
&
S0
)
==
&
S0
)
;
return
crc32_context
;
}
int
*
func_42
(
)
{
return
&
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
