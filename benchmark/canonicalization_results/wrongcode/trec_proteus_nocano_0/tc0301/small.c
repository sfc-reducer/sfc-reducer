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
(
a
)
{
return
-
a
;
}
int
b
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
unsigned
char
d
(
)
;
unsigned
e
(
)
{
d
(
a
)
;
return
b
;
}
unsigned
char
d
(
)
{
unsigned
*
c
=
&
b
;
unsigned
*
d
=
&
b
;
*
c
=
a
(
d
==
c
)
;
return
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
b
,
b
)
;
return
0
;
}
