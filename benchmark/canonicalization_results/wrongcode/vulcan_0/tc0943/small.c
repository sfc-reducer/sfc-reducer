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
int
safe_add_func_int32_t_s_s
(
si1
,
l_1024
)
{
return
si1
+
si1
;
}
int
l_1024
;
void
platform_main_end
(
l_1015
,
si1
)
{
printf
(
"checksum = %x\n"
,
l_1024
)
;
}
int
g_64
[
]
;
const
int
*
g_132
=
g_64
;
int
*
*
si1
;
int
*
g_534
=
&
l_1024
;
unsigned
func_1
(
)
{
const
int
*
*
l_1024
=
&
g_132
;
int
*
*
*
l_1015
=
&
si1
;
if
(
safe_add_func_int32_t_s_s
(
l_1015
==
&
si1
,
4294967288UL
)
)
*
g_534
^=
0xC78C3F93L
;
return
*
*
l_1024
;
}
int
main
(
)
{
int
l_1024
=
func_1
(
)
;
platform_main_end
(
l_1024
,
l_1024
)
;
return
0
;
}
