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
crc32_context
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
f0
;
unsigned
S0
;
char
l_190
;
short
l_186
;
short
print_hash_value
;
}
;
int
*
g_17
;
struct
S0
l_186
;
int
*
func_15
(
int
*
)
;
struct
S0
func_25
(
int
,
int
*
,
int
*
)
;
unsigned
func_1
(
)
{
func_15
(
g_17
)
;
return
l_186
.
f0
;
}
int
*
func_15
(
int
*
p_16
)
{
int
*
*
l_186
;
int
*
*
*
S0
=
&
l_186
;
func_25
(
crc32_context
,
*
*
S0
,
*
*
S0
)
;
return
S0
;
}
struct
S0
func_25
(
int
p_26
,
int
*
p_27
,
int
*
p_28
)
{
struct
S0
l_189
=
{
1L
}
;
struct
S0
*
S0
=
&
l_186
;
*
S0
=
l_189
;
*
S0
=
*
S0
;
return
*
S0
;
}
int
main
(
)
{
int
l_186
=
func_1
(
)
;
platform_main_end
(
crc32_context
,
l_186
)
;
return
0
;
}
