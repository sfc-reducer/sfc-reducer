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
/=
si2
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
si2
)
{
printf
(
"checksum = %x\n"
,
x
)
;
}
int
*
g_74
[
]
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
!
func_11
(
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
g_402
;
}
int
func_11
(
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
sizeof
func_1
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
return
*
g_74
+=
safe_add_func_int16_t_s_s
(
*
g_402
,
sizeof
g_402
)
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
si1
,
crc32_context
)
;
return
0
;
}
