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
short
a
(
a
,
b
)
{
return
a
&&
b
;
}
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
b
)
;
}
int
c
;
int
d
;
int
e
(
int
)
;
int
f
(
)
{
int
*
a
=
&
c
;
c
++
;
a
--
;
e
(
c
)
;
return
*
a
;
}
int
e
(
b
)
{
int
*
e
=
&
d
;
*
e
|=
b
==
(
b
||
a
(
*
e
,
*
e
)
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
int
d
=
f
(
)
;
b
(
c
,
d
)
;
return
0
;
}
