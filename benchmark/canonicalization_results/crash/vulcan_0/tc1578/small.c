void
safe_add_func_int16_t_s_s
(
)
;
short
safe_sub_func_int16_t_s_s
(
si1
)
{
return
si1
;
}
int
safe_add_func_int32_t_s_s
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
unsigned
si2
(
)
{
unsigned
si1
=
0x86E4L
;
for
(
;
;
)
{
unsigned
short
si2
=
safe_sub_func_int16_t_s_s
(
si1
)
;
safe_add_func_int16_t_s_s
(
si2
>
safe_add_func_int32_t_s_s
(
si1
)
)
;
}
}
