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
int
*
c
=
&
a
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
*
a
=
&
c
;
*
*
a
=
1
;
*
c
=
*
d
;
return
!
a
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
