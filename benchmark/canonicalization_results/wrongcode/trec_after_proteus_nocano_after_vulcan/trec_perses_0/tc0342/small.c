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
int
*
c
=
&
a
;
static
char
d
=
6
;
int
*
*
*
e
;
static
int
*
*
*
*
f
=
&
e
;
char
g
(
)
{
int
*
*
*
*
*
a
=
&
f
;
*
c
=
*
a
!=
&
e
|
d
;
return
1
;
}
int
main
(
)
{
g
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
