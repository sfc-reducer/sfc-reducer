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
unsigned
char
*
c
;
static
unsigned
char
*
*
d
=
&
c
;
int
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
unsigned
char
*
*
*
a
=
&
d
;
unsigned
d
=
2
;
*
b
^=
d
+=
*
a
!=
&
c
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
