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
p_43
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
struct
S1
{
int
crc32_context
;
char
p_43
;
}
;
struct
p_43
{
unsigned
p_43
;
char
crc32_context
;
struct
S1
f3
;
}
;
struct
p_43
p_43
=
{
0L
,
0x40L
,
0UL
,
0x627CL
}
;
struct
p_43
*
g_645
;
int
*
g_1172
;
int
*
func_9
(
int
,
int
,
int
*
,
int
,
short
)
;
int
*
func_17
(
)
;
unsigned
char
func_40
(
int
,
int
*
,
struct
p_43
,
short
)
;
struct
p_43
func_1
(
)
{
int
*
*
l_1868
=
&
g_1172
;
func_9
(
crc32_context
,
crc32_context
,
*
l_1868
=
func_17
(
)
,
p_43
.
p_43
,
p_43
.
p_43
)
;
return
p_43
;
}
int
*
func_9
(
int
crc32_context
,
int
func_9
,
int
*
p_12
,
int
p_13
,
short
p_14
)
{
struct
p_43
*
*
l_1986
=
&
g_645
;
struct
p_43
*
*
l_1985
=
&
g_645
;
*
g_1172
=
(
l_1985
==
l_1986
)
<
func_40
(
*
g_1172
,
g_1172
,
p_43
,
p_43
.
p_43
)
;
return
g_645
;
}
int
*
func_17
(
)
{
return
&
crc32_context
;
}
unsigned
char
func_40
(
int
p_41
,
int
*
p_42
,
struct
p_43
p_43
,
short
p_44
)
{
return
p_43
.
f3
.
p_43
;
}
int
main
(
)
{
func_1
(
)
;
platform_main_end
(
crc32_context
,
crc32_context
)
;
return
0
;
}
