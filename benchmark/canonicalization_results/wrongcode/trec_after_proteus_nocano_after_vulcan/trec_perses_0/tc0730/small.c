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
unsigned
char
*
*
d
;
unsigned
e
(
unsigned
,
int
)
;
int
b
(
)
{
return
e
(
4
,
c
)
;
}
unsigned
e
(
unsigned
a
,
int
b
)
{
unsigned
char
*
*
*
c
=
&
d
;
unsigned
char
*
*
*
*
e
=
&
c
;
return
*
e
!=
&
d
|
a
;
}
int
main
(
)
{
int
c
=
b
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
