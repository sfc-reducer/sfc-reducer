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
transparent_crc
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
val
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
val
{
unsigned
val
;
char
crc32_context
;
unsigned
l_82
;
unsigned
transparent_crc
;
unsigned
func_26
;
}
;
struct
S2
{
struct
val
val
;
}
;
struct
val
val
;
struct
S2
g_62
;
struct
val
func_18
(
int
*
,
unsigned
char
,
unsigned
char
,
int
*
,
unsigned
)
;
int
*
l_86
(
unsigned
,
char
,
struct
val
,
unsigned
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
int
*
transparent_crc
=
0
;
func_18
(
l_86
(
crc32_context
,
0UL
,
val
,
val
.
val
,
transparent_crc
)
,
val
.
val
,
g_62
.
val
.
val
,
transparent_crc
,
val
.
val
)
;
return
val
.
val
;
}
struct
val
func_18
(
int
*
p_19
,
unsigned
char
p_20
,
unsigned
char
p_21
,
int
*
p_22
,
unsigned
p_23
)
{
struct
val
*
l_108
=
&
val
;
*
l_108
=
val
;
return
val
;
}
int
*
l_86
(
unsigned
p_27
,
char
p_28
,
struct
val
p_29
,
unsigned
p_30
,
int
*
p_31
)
{
struct
val
l_85
=
{
18446744073709551615UL
}
;
struct
val
*
l_86
=
&
val
;
*
l_86
=
l_85
;
return
&
val
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
val
,
"g_59.f0"
,
crc32_context
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
