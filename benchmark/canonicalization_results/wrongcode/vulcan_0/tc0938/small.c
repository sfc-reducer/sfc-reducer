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
safe_div_func_int16_t_s_s
(
si1
,
si2
)
{
return
si2
==
0
||
si1
&&
si2
?
si1
:
si1
/
si2
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
f7
)
{
crc32_context
+=
f7
;
}
void
platform_main_end
(
x
,
si2
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
g_359
;
unsigned
:
28
;
unsigned
crc32_context
;
unsigned
:
13
;
signed
:
7
;
unsigned
:
14
;
signed
f7
:
16
;
}
;
union
f7
{
char
f7
;
}
;
union
f7
g_79
;
volatile
struct
S0
g_89
=
{
0xAF71L
}
;
unsigned
f7
=
0x507CC00BL
;
const
unsigned
func_25
(
unsigned
short
,
unsigned
char
,
union
f7
)
;
int
func_48
(
unsigned
,
int
,
unsigned
,
union
f7
,
union
f7
)
;
const
char
func_70
(
char
,
unsigned
,
int
)
;
union
f7
func_1
(
)
{
func_25
(
f7
,
f7
,
g_79
)
;
return
g_79
;
}
const
unsigned
func_25
(
unsigned
short
p_26
,
unsigned
char
p_27
,
union
f7
p_28
)
{
lbl_1236
:
f7
=
safe_div_func_int16_t_s_s
(
f7
,
safe_div_func_int16_t_s_s
(
crc32_context
,
crc32_context
&&
f7
&&
g_89
.
f7
)
)
;
if
(
func_48
(
0x2CL
,
f7
,
f7
,
g_79
,
g_79
)
)
safe_div_func_int16_t_s_s
(
4L
,
safe_div_func_int16_t_s_s
(
f7
,
crc32_context
)
)
;
else
if
(
f7
)
goto
lbl_1236
;
return
f7
;
}
int
func_48
(
unsigned
p_49
,
int
p_50
,
unsigned
p_51
,
union
f7
p_52
,
union
f7
p_53
)
{
func_70
(
f7
,
f7
,
f7
)
;
for
(
f7
=
-
16
;
f7
;
++
f7
)
;
return
f7
;
}
const
char
func_70
(
char
p_71
,
unsigned
p_72
,
int
p_73
)
{
g_89
.
f7
=
crc32_context
&&
f7
;
return
f7
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
transparent_crc
(
f7
,
"g_359"
,
f7
)
;
platform_main_end
(
crc32_context
,
f7
)
;
return
0
;
}
