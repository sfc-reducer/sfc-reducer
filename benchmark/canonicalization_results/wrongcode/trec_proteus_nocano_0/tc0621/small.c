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
static
const
int
*
c
=
&
a
;
unsigned
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
*
b
=
1
;
*
b
=
*
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
