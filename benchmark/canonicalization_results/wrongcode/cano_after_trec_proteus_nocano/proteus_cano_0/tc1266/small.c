int
printf
(
const
char
*
,
...
)
;
char
a
(
__m128
,
b
)
{
return
b
+
b
;
}
char
b
;
void
c
(
a
,
__m128
)
{
printf
(
"%x"
,
a
)
;
}
unsigned
*
d
;
static
unsigned
*
*
e
=
&
d
;
void
*
g
(
)
{
unsigned
*
*
*
c
=
&
e
;
a
(
1
,
&
d
==
*
c
)
||
b
++
;
return
a
;
}
char
main
(
)
{
g
(
)
;
c
(
b
,
b
)
;
return
0
;
}
