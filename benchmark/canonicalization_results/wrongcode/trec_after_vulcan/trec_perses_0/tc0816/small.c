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
int
b
;
static
const
int
*
c
=
&
b
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
b
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
c
;
return
*
c
;
}
int
main
(
)
{
int
b
=
d
(
)
;
a
(
b
,
b
)
;
return
0
;
}
