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
;
void
b
(
__m128
,
__m128d
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
int
*
d
(
int
*
,
unsigned
char
)
;
int
*
e
(
)
;
void
*
c
(
)
{
return
d
(
e
(
)
,
1
)
;
}
int
*
d
(
int
*
b
,
unsigned
char
__m128
)
{
char
d
=
0xF
;
*
b
=
b
==
&
a
^
d
;
return
b
;
}
int
*
e
(
)
{
return
&
a
;
}
char
main
(
)
{
c
(
)
;
b
(
a
,
a
)
;
return
0
;
}
