char
safe_lshift_func_int16_t_s_s
(
)
;
char
safe_mod_func_uint8_t_u_u
(
unsigned
char
ui1
,
char
ui2
)
{
return
ui2
?
ui1
:
ui1
%
ui1
;
}
union
U1
{
int
safe_lshift_func_int16_t_s_s
;
int
f3
;
}
;
union
U1
ui1
(
)
{
union
U1
ui1
=
{
0x9B034DBDL
}
;
for
(
;
;
)
if
(
safe_lshift_func_int16_t_s_s
(
safe_mod_func_uint8_t_u_u
(
ui1
.
f3
,
safe_lshift_func_int16_t_s_s
(
)
)
)
)
;
}
