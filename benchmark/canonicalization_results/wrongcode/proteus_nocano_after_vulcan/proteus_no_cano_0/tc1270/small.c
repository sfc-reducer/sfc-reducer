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
long
safe_add_func_int64_t_s_s
(
si1
,
func_1
)
{
return
++
si1
;
}
int
l_925
;
void
transparent_crc
(
unsigned
val
,
char
*
g_154
,
int
si1
)
{
l_925
+=
val
;
}
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
struct
l_925
{
int
l_925
;
}
;
struct
S3
{
struct
l_925
l_925
;
}
;
struct
l_925
*
si1
;
struct
S3
l_1139
[
]
;
struct
l_925
g_182
[
]
;
struct
l_925
func_15
(
)
;
int
func_1
(
)
{
int
*
l_1139
=
&
l_925
;
func_15
(
)
;
return
*
l_1139
;
}
struct
l_925
func_15
(
)
{
struct
l_925
*
*
l_925
=
&
si1
;
struct
l_925
*
*
l_924
=
&
si1
;
int
*
l_926
=
&
l_1139
[
1
]
.
l_925
.
l_925
;
*
l_926
^=
safe_add_func_int64_t_s_s
(
l_924
==
l_925
,
0
)
;
return
*
g_182
;
}
int
main
(
)
{
int
si1
=
func_1
(
)
;
if
(
l_925
++
)
;
else
transparent_crc
(
l_1139
[
l_925
]
.
l_925
.
l_925
,
"g_154[i].f0.f2"
,
si1
)
;
platform_main_end
(
si1
,
l_925
)
;
return
0
;
}
