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
e
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
a
=
0
;
*
b
=
*
d
;
return
*
b
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
