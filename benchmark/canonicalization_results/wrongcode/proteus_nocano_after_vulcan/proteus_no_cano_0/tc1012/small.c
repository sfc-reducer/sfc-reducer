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
func_1
)
{
printf
(
"checksum = %x\n"
,
func_1
)
;
}
int
*
g_229
[
]
[
10
]
;
int
*
*
g_228
=
*
g_229
;
int
*
g_513
=
&
crc32_context
;
int
*
func_8
(
char
,
unsigned
char
,
unsigned
,
int
*
)
;
short
func_26
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
*
func_30
(
)
;
int
func_50
(
char
)
;
char
func_1
(
)
{
int
*
l_355
[
]
[
3
]
=
{
&
crc32_context
,
&
crc32_context
,
&
crc32_context
,
&
crc32_context
}
;
func_8
(
0
,
func_26
(
func_30
(
)
,
0
,
6
)
,
crc32_context
,
!
4
)
;
return
!
g_228
;
}
int
*
func_8
(
char
p_9
,
unsigned
char
crc32_context
,
unsigned
g_228
,
int
*
p_12
)
{
return
func_1
;
}
short
func_26
(
int
*
g_513
,
int
*
func_8
,
unsigned
p_29
)
{
int
crc32_context
;
int
*
l_387
=
&
crc32_context
;
*
g_513
=
func_50
(
1UL
)
|
crc32_context
;
*
g_228
=
l_387
;
return
crc32_context
;
}
int
*
func_30
(
)
{
return
g_513
;
}
int
func_50
(
char
p_51
)
{
int
*
*
l_103
=
&
g_513
;
++
*
*
l_103
;
return
crc32_context
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
crc32_context
)
;
return
0
;
}
