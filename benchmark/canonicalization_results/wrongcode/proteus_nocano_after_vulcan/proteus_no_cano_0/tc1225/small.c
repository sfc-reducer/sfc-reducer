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
p_69
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
p_69
=
0x7CEFA9D1L
;
int
val
;
unsigned
func_68
(
)
;
unsigned
func_1
(
)
{
for
(
;
;
)
{
const
unsigned
l_1076
[
]
[
10
]
[
6
]
=
{
{
0x15L
}
,
{
{
0x8FL
}
,
{
3UL
}
,
{
0xD9L
}
,
248UL
}
}
;
if
(
l_1076
[
1
]
[
3
]
[
0
]
|
func_68
(
)
)
p_69
=
-
crc32_context
;
for
(
val
=
5
;
val
;
val
++
)
for
(
;
;
)
{
if
(
crc32_context
)
break
;
if
(
crc32_context
)
;
else
return
3
;
}
}
}
unsigned
func_68
(
p_69
)
{
return
p_69
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
p_69
,
p_69
)
;
return
0
;
}
