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
ui1
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
unsigned
short
func_33
(
unsigned
short
,
int
*
*
,
int
*
*
,
int
*
*
,
unsigned
long
long
)
;
int
*
*
func_41
(
unsigned
long
long
,
int
*
)
;
unsigned
func_1
(
)
{
return
func_33
(
crc32_context
,
func_41
(
crc32_context
,
&
crc32_context
)
,
0
,
0
,
crc32_context
)
;
}
unsigned
short
func_33
(
unsigned
short
func_41
,
int
*
*
p_35
,
int
*
*
func_33
,
int
*
*
p_37
,
unsigned
long
long
p_38
)
{
int
*
*
*
l_363
=
&
func_33
;
int
*
l_382
=
&
crc32_context
;
while
(
++
crc32_context
)
if
(
safe_add_func_uint32_t_u_u
(
8UL
,
&
func_33
!=
l_363
)
)
break
;
return
*
l_382
;
}
int
*
*
func_41
(
unsigned
long
long
p_42
,
int
*
p_43
)
{
return
func_1
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
