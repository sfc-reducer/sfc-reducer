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
int
*
c
;
char
*
d
(
char
,
int
)
;
int
e
(
)
{
d
(
1
,
a
)
;
return
1
;
}
char
*
d
(
char
b
,
int
d
)
{
int
*
*
e
=
&
c
;
int
*
f
=
&
a
;
unsigned
a
=
0x8
;
int
*
*
g
=
&
c
;
*
f
=
a
^
g
!=
e
;
return
c
;
}
int
main
(
)
{
e
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
