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
a
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
c
;
static
const
int
*
b
=
&
c
;
char
d
(
)
{
int
*
printf
=
&
c
;
*
printf
=
1
;
*
printf
=
*
b
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
d
(
)
;
a
(
c
,
c
)
;
return
0
;
}
