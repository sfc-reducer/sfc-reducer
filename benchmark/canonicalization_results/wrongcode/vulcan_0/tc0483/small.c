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
int
f5
;
short
f6
;
unsigned
f7
;
}
;
struct
S2
{
struct
S0
S0
;
struct
S0
g_16
;
}
;
int
S0
;
struct
S2
g_151
;
struct
S2
*
g_150
=
&
g_151
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
func_26
(
)
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
func_26
(
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
g_400
.
f5
,
g_273
)
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
struct
S2
l_450
=
{
2263
}
;
*
g_150
=
l_450
;
*
g_150
=
*
g_150
;
return
&
S0
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
g_150
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
g_150
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
print_hash_value
)
;
return
0
;
}
