char
safe_mod_func_uint8_t_u_u
(
unsigned
char
ui1
,
unsigned
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
unsigned
safe_mod_func_uint32_t_u_u
(
ui1
)
{
return
ui1
%
ui1
;
}
float
g_34
;
int
ui2
(
int
*
ui1
)
{
*
ui1
=
safe_mod_func_uint8_t_u_u
(
safe_mod_func_uint32_t_u_u
(
0
)
,
g_34
)
;
for
(
;
;
)
;
}
