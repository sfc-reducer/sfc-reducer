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
safe_add_func_int64_t_s_s
(
si1
,
si2
)
{
return
si1
+
si2
;
}
void
platform_main_end
(
x
,
si1
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
static
long
long
g_9
=
0xCEAFD94FE5F36F6DLL
;
int
si1
;
char
func_1
(
)
{
long
long
*
l_8
=
&
g_9
;
unsigned
*
si2
;
unsigned
*
*
l_694
=
&
si2
;
int
*
l_700
=
&
si1
;
*
l_700
=
safe_add_func_int64_t_s_s
(
*
l_8
,
l_694
==
&
si2
)
;
return
si1
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
g_9
)
;
return
0
;
}
