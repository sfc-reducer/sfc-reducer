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
a
;
void
b
(
a
,
b
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
char
*
*
*
*
*
d
;
int
*
e
=
&
a
;
unsigned
f
(
)
{
int
*
*
a
=
&
e
;
unsigned
char
*
*
*
*
*
*
b
=
&
d
;
*
e
^=
-
(
b
==
&
d
)
;
return
*
*
a
;
}
int
main
(
)
{
int
a
=
f
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
