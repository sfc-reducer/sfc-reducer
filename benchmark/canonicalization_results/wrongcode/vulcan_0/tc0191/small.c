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
g_2
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
l_5
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
vname
;
char
g_6
;
unsigned
g_12
;
unsigned
val
=
0x4AL
;
int
g_419
;
unsigned
short
func_24
(
unsigned
char
,
int
,
char
)
;
const
unsigned
long
long
func_68
(
unsigned
char
)
;
unsigned
short
func_89
(
unsigned
,
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
crc32_context
=
0xD3F46721L
;
for
(
vname
=
0
;
vname
>=
-
14
;
--
vname
)
if
(
(
g_6
=
crc32_context
)
>=
crc32_context
|
g_12
++
)
{
func_24
(
crc32_context
,
g_12
,
crc32_context
)
;
g_419
=
val
;
crc32_context
=
0
;
}
else
return
crc32_context
;
return
crc32_context
;
}
unsigned
short
func_24
(
unsigned
char
p_25
,
int
p_26
,
char
p_27
)
{
for
(
;
crc32_context
;
)
func_68
(
0x931D25F8L
)
;
return
val
;
}
const
unsigned
long
long
func_68
(
unsigned
char
p_69
)
{
for
(
;
;
)
func_89
(
val
,
val
)
;
}
unsigned
short
func_89
(
unsigned
p_90
,
unsigned
long
long
p_91
)
{
func_89
(
g_12
,
val
)
;
return
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
g_419
,
"g_419"
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
