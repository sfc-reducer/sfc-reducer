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
l_947
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
struct
x
{
int
crc32_context
;
}
;
struct
S1
{
struct
x
x
;
}
;
int
*
g_166
=
&
crc32_context
;
struct
S1
x
;
unsigned
char
func_12
(
unsigned
,
unsigned
char
,
struct
S1
,
struct
x
,
int
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
*
l_968
=
&
x
.
x
;
struct
x
l_977
=
{
1L
}
;
func_12
(
sizeof
x
,
crc32_context
,
x
,
*
l_968
,
*
g_166
)
;
return
l_977
;
}
unsigned
char
func_12
(
unsigned
crc32_context
,
unsigned
char
S1
,
struct
S1
x
,
struct
x
func_12
,
int
printf
)
{
unsigned
short
*
l_948
;
unsigned
short
*
*
l_947
=
&
l_948
;
*
g_166
=
-
(
l_947
==
&
l_948
)
;
return
sizeof
x
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
