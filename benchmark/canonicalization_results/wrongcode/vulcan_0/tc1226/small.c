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
l_1902
)
{
printf
(
"checksum = %x\n"
,
crc32_context
)
;
}
int
l_1902
;
static
const
int
*
g_1579
=
&
l_1902
;
unsigned
char
*
func_28
(
int
,
unsigned
short
,
unsigned
char
*
,
unsigned
short
,
unsigned
short
)
;
unsigned
char
*
func_51
(
short
,
unsigned
,
long
long
)
;
unsigned
func_1
(
)
{
int
*
l_1901
=
&
l_1902
;
char
l_1902
=
0xB8L
;
func_28
(
l_1902
,
l_1902
,
&
l_1902
,
l_1902
,
l_1902
)
;
*
l_1901
=
0xCAL
;
return
l_1902
;
}
unsigned
char
*
func_28
(
int
p_29
,
unsigned
short
p_30
,
unsigned
char
*
p_31
,
unsigned
short
p_32
,
unsigned
short
p_33
)
{
func_51
(
l_1902
,
p_29
,
p_29
)
;
int
*
l_1721
=
&
crc32_context
;
*
l_1721
=
*
g_1579
;
return
func_51
;
}
unsigned
char
*
func_51
(
short
p_52
,
unsigned
p_53
,
long
long
p_54
)
{
int
*
l_78
=
&
l_1902
;
*
l_78
=
p_54
;
return
func_51
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
crc32_context
,
l_1902
)
;
return
0
;
}
