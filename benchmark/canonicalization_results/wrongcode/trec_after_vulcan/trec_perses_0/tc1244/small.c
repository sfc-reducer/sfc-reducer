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
void
c
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
a
=
1
;
static
const
int
*
d
=
&
a
;
unsigned
b
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
*
b
&=
0
;
*
b
=
*
d
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
int
a
=
b
(
)
;
c
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
