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
int
a
(
b
,
a
)
{
return
a
+
b
;
}
int
c
;
void
d
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
c
)
;
}
int
e
[
]
;
const
int
*
f
=
e
;
int
*
*
b
;
int
*
g
=
&
c
;
unsigned
h
(
)
{
const
int
*
*
c
=
&
f
;
int
*
*
*
d
=
&
b
;
if
(
a
(
d
==
&
b
,
1
)
)
*
g
^=
1
;
return
*
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
a
=
h
(
)
;
d
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
