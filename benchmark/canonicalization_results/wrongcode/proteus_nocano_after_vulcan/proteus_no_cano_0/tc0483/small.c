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
struct
S0
{
const
;
}
;
int
S0
;
int
*
g_273
;
struct
S0
g_400
;
int
*
func_29
(
unsigned
*
,
struct
S0
,
unsigned
,
unsigned
*
)
;
unsigned
*
func_34
(
int
,
unsigned
*
,
unsigned
char
,
int
)
;
short
func_1
(
)
{
int
*
*
l_479
=
&
g_273
;
func_29
(
func_34
(
S0
,
g_273
,
S0
,
S0
)
,
g_400
,
sizeof
func_1
,
g_273
)
;
return
*
*
l_479
;
}
int
*
func_26
(
)
{
return
func_1
;
}
int
*
func_29
(
unsigned
*
p_30
,
struct
S0
p_31
,
unsigned
p_32
,
unsigned
*
p_33
)
{
int
*
*
l_405
=
&
g_273
;
*
l_405
=
p_30
;
return
func_1
;
}
unsigned
*
func_34
(
int
p_35
,
unsigned
*
p_36
,
unsigned
char
p_37
,
int
p_38
)
{
return
func_26
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
print_hash_value
,
print_hash_value
)
;
return
0
;
}
