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
safe_mul_func_int8_t_s_s
(
char
si1
,
char
si2
)
{
return
!
si1
||
si1
&&
si2
<=
0
&&
si2
<
si1
;
}
int
crc32_context
;
void
platform_main_end
(
si2
,
func_1
)
{
printf
(
"checksum = %x\n"
,
func_1
)
;
}
int
*
si2
=
&
crc32_context
;
int
func_7
(
int
*
,
int
,
unsigned
,
char
)
;
int
func_1
(
)
{
int
*
*
l_458
=
&
si2
;
func_7
(
*
l_458
,
crc32_context
,
*
si2
,
*
si2
)
;
return
!
l_458
;
}
int
func_7
(
int
*
si2
,
int
l_458
,
unsigned
crc32_context
,
char
si1
)
{
int
l_316
=
0x6F94ADABL
;
*
si2
=
safe_mul_func_int8_t_s_s
(
l_316
,
si1
&&
l_458
)
;
return
*
si2
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
crc32_context
)
;
return
0
;
}
