struct
S0
{
char
f2
;
long
long
f4
;
}
;
struct
{
struct
S0
f1
;
}
g_34
;
static
void
*
g_110
=
&
g_34
.
f1
.
f4
;
char
f2
(
p_60
)
{
unsigned
f1
=
1UL
;
long
long
*
f4
=
&
g_34
.
f1
.
f4
;
if
(
g_34
.
f1
.
f2
)
for
(
;
f1
;
f1
+=
1
)
*
f4
=
(
g_110
==
f4
&&
g_34
.
f1
.
f2
)
>
p_60
;
return
f1
;
}
