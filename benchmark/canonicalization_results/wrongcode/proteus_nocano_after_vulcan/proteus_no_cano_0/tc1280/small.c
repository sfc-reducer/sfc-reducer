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
flag
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
crc32_context
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
int
g_2
;
int
g_59
[
]
[
2
]
;
int
*
func_5
(
unsigned
short
,
int
*
,
char
,
int
*
,
int
*
)
;
int
func_1
(
)
{
int
*
l_11
=
&
g_2
;
func_5
(
crc32_context
,
l_11
,
crc32_context
,
&
crc32_context
,
&
crc32_context
)
;
return
*
l_11
;
}
int
*
func_5
(
unsigned
short
p_6
,
int
*
p_7
,
char
p_8
,
int
*
p_9
,
int
*
p_10
)
{
g_2
--
;
return
func_1
;
}
int
main
(
)
{
int
j
;
func_1
(
)
;
do
if
(
j
=
0
)
;
else
transparent_crc
(
g_59
[
g_2
]
[
j
]
,
"g_59[i][j]"
,
j
)
;
while
(
g_2
++
)
;
platform_main_end
(
crc32_context
,
j
)
;
return
0
;
}
