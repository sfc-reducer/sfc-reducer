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
char
safe_add_func_int8_t_s_s
(
si1
,
si2
)
{
return
si1
>
0
?
si1
:
si2
;
}
unsigned
char
safe_lshift_func_uint8_t_u_s
(
char
left
,
int
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
S0
)
{
crc32_context
+=
S0
;
}
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
crc32_context
)
;
}
struct
S0
{
unsigned
f1
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
S0
,
S0
,
S0
,
S0
)
;
return
g_204
.
f1
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
S0
,
S0
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
for
(
crc32_context
=
-
1
;
crc32_context
>=
10
;
crc32_context
=
safe_add_func_int8_t_s_s
(
crc32_context
,
9
)
)
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
S0
,
"g_45"
,
S0
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
