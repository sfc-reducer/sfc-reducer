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
f0
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
x
{
int
crc32_context
;
unsigned
x
;
}
;
union
U3
{
int
crc32_context
;
}
;
char
*
func_33
(
)
;
struct
x
func_40
(
)
;
char
x
(
)
;
struct
x
func_1
(
)
{
struct
x
x
=
{
0xB4CB2677L
}
;
func_33
(
)
;
return
x
;
}
char
*
func_33
(
)
{
func_40
(
)
;
return
x
;
}
struct
x
func_40
(
struct
x
p_44
)
{
union
U3
l_202
[
2
]
;
x
(
l_202
)
;
return
p_44
;
}
char
x
(
)
{
struct
x
x
=
{
0UL
}
;
struct
x
*
l_69
=
&
x
;
int
*
l_70
=
&
x
.
crc32_context
;
int
*
l_71
[
]
[
7
]
[
7
]
=
{
&
x
.
crc32_context
}
;
*
l_69
=
x
;
crc32_context
=
x
.
crc32_context
;
int
*
*
l_105
=
l_71
[
4
]
[
2
]
;
*
l_105
=
l_70
;
return
*
l_70
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
