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
transparent_crc
(
unsigned
val
,
char
*
vname
,
int
S0
)
{
crc32_context
+=
val
;
}
void
platform_main_end
(
x
,
g_56
)
{
printf
(
"checksum = %x\n"
,
g_56
)
;
}
struct
val
{
long
f0
;
short
val
;
long
g_53
;
unsigned
crc32_context
;
}
;
int
*
f0
;
struct
val
val
;
int
*
*
func_30
(
int
,
int
,
int
*
*
,
int
*
,
int
*
)
;
char
func_36
(
int
*
*
,
unsigned
,
int
*
*
)
;
static
char
func_1
(
)
{
int
*
*
l_558
=
&
f0
;
func_30
(
0L
,
*
f0
,
&
f0
,
*
l_558
,
f0
)
;
return
crc32_context
;
}
int
*
*
func_30
(
int
p_31
,
int
p_32
,
int
*
*
p_33
,
int
*
p_34
,
int
*
p_35
)
{
struct
val
l_163
=
{
1L
}
;
struct
val
*
l_164
=
&
val
;
*
l_164
=
l_163
;
func_36
(
&
f0
,
0x79L
,
p_33
)
;
return
l_164
;
}
char
func_36
(
int
*
*
p_37
,
unsigned
p_38
,
int
*
*
p_39
)
{
struct
val
*
l_160
=
&
val
;
*
l_160
=
val
;
return
*
f0
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
transparent_crc
(
val
.
f0
,
"g_56.f0"
,
crc32_context
)
;
platform_main_end
(
print_hash_value
,
crc32_context
)
;
return
0
;
}
