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
p_3
=
0xEB104B5BL
;
int
*
g_406
=
&
crc32_context
;
const
int
*
func_2
(
int
*
,
int
*
,
unsigned
char
,
int
)
;
int
*
func_7
(
)
;
int
func_1
(
)
{
func_2
(
func_7
(
)
,
&
crc32_context
,
crc32_context
,
crc32_context
)
;
return
*
g_406
;
}
const
int
*
func_2
(
int
*
p_3
,
int
*
l_821
,
unsigned
char
p_5
,
int
p_6
)
{
++
*
p_3
;
return
&
crc32_context
;
}
int
*
func_7
(
)
{
int
*
l_820
=
&
p_3
;
int
*
l_836
=
&
crc32_context
;
if
(
*
l_820
)
{
int
*
l_821
[
4
]
;
for
(
;
crc32_context
<
4
;
crc32_context
++
)
l_821
[
crc32_context
]
=
&
p_3
;
return
l_821
[
3
]
;
}
else
return
l_836
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
p_3
,
crc32_context
)
;
return
0
;
}
