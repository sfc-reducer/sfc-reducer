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
U1
,
crc32_context
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
union
U1
{
short
U1
;
}
;
unsigned
g_72
[
]
[
5
]
[
2
]
=
{
{
{
65535UL
}
,
65535UL
}
}
;
union
U1
U1
;
long
long
func_53
(
long
long
,
unsigned
short
)
;
unsigned
char
func_70
(
)
;
unsigned
func_1
(
)
{
func_53
(
crc32_context
,
U1
.
U1
)
;
return
6
;
}
long
long
func_53
(
long
long
crc32_context
,
unsigned
short
platform_main_end
)
{
func_70
(
crc32_context
)
;
return
U1
.
U1
;
}
unsigned
char
func_70
(
)
{
int
*
U1
=
&
crc32_context
;
*
U1
=
g_72
[
0
]
[
1
]
[
0
]
>
(
&
crc32_context
==
U1
)
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
U1
=
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
