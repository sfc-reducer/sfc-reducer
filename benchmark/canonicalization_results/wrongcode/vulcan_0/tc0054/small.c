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
short
safe_sub_func_int16_t_s_s
(
si1
,
si2
)
{
return
si1
-
si2
;
}
void
platform_main_end
(
x
,
S0
)
{
printf
(
"checksum = %x\n"
,
S0
)
;
}
char
S0
;
struct
si1
*
*
g_168
;
short
*
*
g_296
;
short
g_603
;
static
short
func_9
(
short
,
short
)
;
unsigned
short
func_14
(
char
)
;
unsigned
func_1
(
)
{
int
l_16
=
0xB101AAE4L
;
struct
si1
*
*
*
si1
=
&
g_168
;
struct
si1
*
*
*
*
si2
=
&
si1
;
short
*
l_1164
=
&
g_603
;
func_9
(
(
func_14
(
l_16
)
|
&
g_168
==
si1
)
>=
0x1DL
,
*
l_1164
)
;
return
S0
;
}
short
func_9
(
short
p_10
,
short
p_11
)
{
for
(
;
S0
>
-
28
;
S0
=
safe_sub_func_int16_t_s_s
(
S0
,
4
)
)
if
(
p_10
)
break
;
return
*
*
g_296
;
}
unsigned
short
func_14
(
char
p_15
)
{
return
p_15
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
S0
,
S0
)
;
return
0
;
}
