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
l_542
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
p_17
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
int
val
=
0xFD43DDCAL
;
int
vname
=
1L
;
static
const
int
*
g_341
=
&
val
;
const
short
func_16
(
unsigned
long
long
)
;
unsigned
func_1
(
)
{
int
*
vname
=
&
val
;
func_16
(
65535UL
)
;
*
vname
=
*
vname
;
return
val
;
}
const
short
func_16
(
unsigned
long
long
crc32_context
)
{
crc32_context
=
0
;
int
*
l_30
=
&
val
;
*
l_30
=
crc32_context
;
if
(
*
g_341
)
for
(
;
vname
;
++
vname
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
print_hash_value
=
func_1
(
)
;
transparent_crc
(
vname
,
"g_146"
,
val
)
;
platform_main_end
(
crc32_context
,
val
)
;
return
0
;
}
