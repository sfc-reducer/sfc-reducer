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
b
,
a
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
static
long
c
=
7
;
long
d
(
)
{
int
*
b
=
&
a
;
int
*
*
d
=
&
b
;
int
*
e
=
&
a
;
*
b
=
*
d
!=
e
^
c
;
return
a
;
}
int
main
(
)
{
d
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
