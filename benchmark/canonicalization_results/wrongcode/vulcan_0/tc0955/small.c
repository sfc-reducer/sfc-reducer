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
long
safe_sub_func_uint64_t_u_u
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
ui1
,
g_1512
)
{
printf
(
"checksum = %x\n"
,
g_1512
)
;
}
struct
S0
*
*
g_1512
;
unsigned
ui2
;
long
func_1
(
)
{
struct
S0
*
*
*
l_1160
=
&
g_1512
;
if
(
safe_sub_func_uint64_t_u_u
(
l_1160
==
&
g_1512
,
-
1L
)
)
ui2
--
;
return
ui2
;
}
int
main
(
)
{
int
g_1512
=
func_1
(
)
;
platform_main_end
(
g_1512
,
g_1512
)
;
return
0
;
}
