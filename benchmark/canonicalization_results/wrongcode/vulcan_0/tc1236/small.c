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
safe_mod_func_int32_t_s_s
(
si1
,
si2
)
{
return
si1
;
}
void
platform_main_end
(
x
,
l_5
)
{
printf
(
"checksum = %x\n"
,
l_5
)
;
}
struct
l_5
{
int
f5
;
}
;
int
l_5
;
int
g_34
=
1L
;
int
*
g_110
=
&
g_34
;
int
*
*
g_109
=
&
g_110
;
unsigned
short
func_68
(
int
*
,
unsigned
short
,
int
,
struct
l_5
)
;
unsigned
func_1
(
)
{
int
*
f5
=
&
l_5
;
int
*
*
*
l_1609
=
&
g_109
;
struct
l_5
l_1759
=
{
0xA23E9535L
}
;
if
(
safe_mod_func_int32_t_s_s
(
func_68
(
*
*
l_1609
,
l_1759
.
f5
,
*
f5
,
l_1759
)
>
(
l_1609
==
&
g_109
)
,
l_5
)
)
*
f5
|=
*
*
g_109
;
return
*
f5
;
}
unsigned
short
func_68
(
int
*
l_5
,
unsigned
short
p_70
,
int
p_71
,
struct
l_5
p_72
)
{
return
p_72
.
f5
;
}
int
main
(
)
{
int
print_hash_value
=
func_1
(
)
;
platform_main_end
(
l_5
,
l_5
)
;
return
0
;
}
