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
char
safe_lshift_func_uint8_t_u_s
(
left
,
right
)
{
return
left
;
}
unsigned
short
safe_unary_minus_func_uint16_t_u
(
ui
)
{
return
-
ui
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
p_22
)
{
printf
(
"checksum = %x\n"
,
p_22
)
;
}
struct
S0
{
const
;
}
;
short
S0
;
struct
S0
g_204
;
struct
S0
func_13
(
short
,
unsigned
char
,
int
,
short
)
;
int
func_21
(
unsigned
,
long
long
)
;
int
func_1
(
)
{
func_13
(
crc32_context
,
crc32_context
,
crc32_context
,
crc32_context
)
;
return
sizeof
func_1
;
}
struct
S0
func_13
(
short
p_14
,
unsigned
char
p_15
,
int
p_16
,
short
p_17
)
{
func_21
(
crc32_context
,
crc32_context
)
;
return
g_204
;
}
int
func_21
(
unsigned
crc32_context
,
long
long
p_23
)
{
do
S0
=
safe_lshift_func_uint8_t_u_s
(
(
crc32_context
|=
safe_unary_minus_func_uint16_t_u
(
1L
)
)
|
S0
,
crc32_context
)
;
while
(
++
crc32_context
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
func_1
(
)
;
platform_main_end
(
crc32_context
,
S0
)
;
return
0
;
}
