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
safe_sub_func_uint32_t_u_u
(
ui1
,
ui2
)
{
return
ui1
-
ui2
;
}
void
platform_main_end
(
S1
,
ui2
)
{
printf
(
"checksum = %x\n"
,
ui2
)
;
}
struct
ui2
{
unsigned
S1
;
}
;
int
S1
=
-
1L
;
int
*
g_120
=
&
S1
;
unsigned
short
*
ui2
;
int
*
volatile
*
g_546
=
&
g_120
;
int
*
volatile
*
*
g_545
=
&
g_546
;
struct
ui2
g_696
;
struct
ui2
func_1
(
)
{
unsigned
short
*
*
l_667
=
&
ui2
;
*
*
*
g_545
&=
safe_sub_func_uint32_t_u_u
(
&
ui2
==
l_667
,
0x97E85365L
)
;
return
g_696
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
S1
,
S1
)
;
return
0
;
}
