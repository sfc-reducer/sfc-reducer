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
safe_unary_minus_func_int32_t_s
(
si
)
{
return
-
si
;
}
void
platform_main_end
(
x
,
l_215
)
{
printf
(
"checksum = %x\n"
,
l_215
)
;
}
int
si
;
int
*
*
l_215
;
int
func_1
(
)
{
int
*
l_195
=
&
si
;
int
*
*
*
si
=
&
l_215
;
if
(
safe_unary_minus_func_int32_t_s
(
si
==
&
l_215
)
>
(
&
l_215
!=
si
)
)
*
l_195
=
0x5A90L
;
return
*
l_195
;
}
int
main
(
)
{
int
si
=
func_1
(
)
;
platform_main_end
(
si
,
si
)
;
return
0
;
}
