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
g_10
)
{
printf
(
"checksum = %x\n"
,
x
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
g_10
;
static
const
int
*
g_9
=
&
g_10
;
struct
S0
g_27
;
char
func_21
(
unsigned
,
char
,
struct
S0
,
int
*
)
;
unsigned
char
func_29
(
int
*
,
int
*
,
unsigned
)
;
int
func_1
(
)
{
int
*
l_28
=
&
g_10
;
int
*
*
l_1096
=
&
l_28
;
func_21
(
g_10
,
g_10
,
g_27
,
l_28
)
;
return
!
l_1096
;
}
char
func_21
(
unsigned
p_22
,
char
p_23
,
struct
S0
p_24
,
int
*
p_25
)
{
return
func_29
(
g_9
,
g_9
,
g_10
)
;
}
unsigned
char
func_29
(
int
*
p_30
,
int
*
p_31
,
unsigned
p_32
)
{
short
l_740
=
0x5F11L
;
*
p_31
=
l_740
;
*
p_31
=
*
g_9
;
return
l_740
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
g_10
,
g_10
)
;
return
0
;
}
