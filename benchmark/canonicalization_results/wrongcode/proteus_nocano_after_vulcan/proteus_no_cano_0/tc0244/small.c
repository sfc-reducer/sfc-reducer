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
g_80
)
{
printf
(
"checksum = %x\n"
,
g_80
)
;
}
struct
S0
{
int
S0
;
int
crc32_context
;
char
func_39
;
char
f9
;
}
;
struct
S0
S0
=
{
0xDF1EF1A9L
}
;
int
func_33
(
unsigned
short
,
long
long
,
char
,
struct
S0
)
;
unsigned
char
val
(
long
long
,
int
)
;
int
func_1
(
)
{
func_33
(
crc32_context
,
crc32_context
,
crc32_context
,
S0
)
;
return
S0
.
S0
;
}
int
func_33
(
unsigned
short
p_34
,
long
long
p_35
,
char
p_36
,
struct
S0
p_37
)
{
return
val
(
crc32_context
,
crc32_context
)
;
}
unsigned
char
val
(
long
long
p_40
,
int
p_41
)
{
struct
S0
l_74
[
]
[
10
]
=
{
1L
}
;
S0
=
l_74
[
0
]
[
2
]
;
S0
=
S0
;
return
sizeof
S0
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
print_hash_value
)
;
return
0
;
}
