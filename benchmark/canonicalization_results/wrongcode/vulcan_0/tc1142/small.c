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
g_572
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
*
g_230
;
int
*
*
const
x
=
&
g_230
;
static
int
*
*
const
*
g_571
=
&
x
;
int
g_775
;
unsigned
short
func_27
(
long
long
,
char
,
unsigned
)
;
unsigned
char
func_44
(
unsigned
,
int
,
unsigned
,
short
)
;
short
func_1
(
)
{
int
x
=
0x9AC70C30L
;
unsigned
crc32_context
=
func_27
(
func_44
(
g_775
,
x
,
x
,
x
)
,
x
,
x
)
;
return
x
;
}
unsigned
short
func_27
(
long
long
p_28
,
char
p_29
,
unsigned
p_30
)
{
int
*
l_1061
=
&
crc32_context
;
*
*
g_571
=
l_1061
;
*
*
g_571
=
*
x
;
*
*
x
|=
p_29
;
return
g_775
;
}
unsigned
char
func_44
(
unsigned
p_45
,
int
p_46
,
unsigned
p_47
,
short
p_48
)
{
int
*
l_841
=
&
g_775
;
*
x
=
l_841
;
return
*
*
x
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
g_775
)
;
return
0
;
}
